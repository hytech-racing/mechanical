<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="2.0"
	xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:fo="http://www.w3.org/1999/XSL/Format"
	xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xs="http://www.w3.org/2001/XMLSchema"
	xmlns:fn="http://www.w3.org/2005/xpath-functions" xmlns:cfg="urn:com:dassault_systemes:config">
	<xsl:param name="CompactView" select="FALSE" />
	<xsl:output indent="no" method="xml" omit-xml-declaration="yes" encoding="UTF-8"/>

	<!-- template CfgEffectivityExpression -->
	<xsl:template match="cfg:CfgEffectivityExpression">
		<xsl:choose>
			<!-- using this condition we stop the export of EffectivityEvolution expression 
				contains element InheritedEff or OperationHandler -->
			<xsl:when
				test="cfg:Expression//cfg:InheritedEff | cfg:Expression//cfg:OperationHandler">
			</xsl:when>
			<xsl:otherwise>
				<xsl:for-each select="cfg:Expression">
				<xsl:element name="EffectivityEvolution">
					<xsl:apply-templates select="." />
				</xsl:element>
				</xsl:for-each>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>

	<!-- template MultiContextView -->
	<xsl:template match="cfg:MultiContextView">
		<xsl:for-each select="cfg:Context">
			<xsl:apply-templates select="." />
		</xsl:for-each>
	</xsl:template>

	<!-- template Context -->
	<xsl:template match="cfg:Context">
		<xsl:element name="Condition">
			<xsl:element name="ModelRef">
			<xsl:attribute name="id">
        <xsl:value-of select="@HolderName" />
      </xsl:attribute>
				<xsl:attribute name="N">
          <xsl:value-of select="@HolderName" />
        </xsl:attribute>
				<xsl:value-of select="@HolderName" />
			</xsl:element>
			<xsl:for-each select="*">
				<xsl:apply-templates select="." />
			</xsl:for-each>
		</xsl:element>
	</xsl:template>


	<!-- template AND -->
	<xsl:template match="cfg:AND">
		<xsl:element name="AND_Evolution">
			<xsl:for-each select="*">
				<xsl:apply-templates select="." />
			</xsl:for-each>
		</xsl:element>
	</xsl:template>


	<!-- template OR -->
	<xsl:template match="cfg:OR">
		<xsl:element name="OR_Evolution">
			<xsl:for-each select="*">
				<xsl:apply-templates select="." />
			</xsl:for-each>
		</xsl:element>
	</xsl:template>

	<!-- template NOT -->
	<xsl:template match="cfg:NOT">
		<xsl:element name="NOT_Evolution">
			<xsl:for-each select="*">
				<xsl:apply-templates select="." />
			</xsl:for-each>
		</xsl:element>
	</xsl:template>


	<!-- template Boolean -->
	<xsl:template match="cfg:Boolean">
		<xsl:choose>
			<xsl:when test=".='false'">
				<xsl:element name="FALSE_Evolution">
				</xsl:element>
			</xsl:when>
			<xsl:when test=".='true'">
				<xsl:element name="TRUE_Evolution">
				</xsl:element>
			</xsl:when>
		</xsl:choose>
	</xsl:template>
	
	<!-- template Series -->
	<xsl:template match="cfg:Series">
		<xsl:element name="EvolutionUnitCondition">
			<xsl:for-each select="*">
				<xsl:apply-templates select="." />
			</xsl:for-each>
		</xsl:element>
	</xsl:template>

	<!-- template Date -->
	<xsl:template match="cfg:Date">
		<xsl:element name="EvolutionDateCondition">
			<xsl:for-each select="*">
				<xsl:apply-templates select="." />
			</xsl:for-each>
		</xsl:element>
	</xsl:template>

	<!-- template SingleValue -->
	<xsl:template match="cfg:SingleValue">
		<xsl:element name="ItemRef">
		<xsl:attribute name="id">
        <xsl:value-of select="@Value" />
      </xsl:attribute>
			<xsl:attribute name="N">
        <xsl:value-of select="@Value" />
      </xsl:attribute>
			<xsl:value-of select="@Value" />
		</xsl:element>
	</xsl:template>

	<!-- template Interval -->
	<xsl:template match="cfg:Interval">
		<xsl:element name="Interval">
			<xsl:apply-templates select="*" />
		</xsl:element>
	</xsl:template>
	
	<!-- template From -->
	<xsl:template match="cfg:From">
		<xsl:variable name="type">
			<xsl:if test="contains(name(../..),'Series')">
				<xsl:value-of select="'StartItemRef'" />
			</xsl:if>
			<xsl:if test="contains(name(../..),'Date')">
				<xsl:value-of select="'StartDate'" />
			</xsl:if>
		</xsl:variable>

		<xsl:choose>
			<xsl:when test="$type='StartDate'">
				<xsl:element name="{$type}">
					<xsl:value-of select="substring-before(@Value, 'T')" />
				</xsl:element>
			</xsl:when>
			<xsl:otherwise>
				<xsl:element name="{$type}">
				<xsl:attribute name="id">
        <xsl:value-of select="@Value" />
      </xsl:attribute>
					<xsl:attribute name="N">
            <xsl:value-of select="@Value" />
          </xsl:attribute>
					<xsl:attribute name="isExcluded">
            <xsl:value-of select="@IsExcluded" />
          </xsl:attribute>
					<xsl:value-of select="@Value" />
				</xsl:element>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>

	<!-- template To  -->
	<xsl:template match="cfg:To">
		<xsl:variable name="type">
			<xsl:if test="contains(name(../..),'Series')">
				<xsl:value-of select="'EndItemRef'" />
			</xsl:if>
			<xsl:if test="contains(name(../..),'Date')">
				<xsl:value-of select="'EndDate'" />
			</xsl:if>
		</xsl:variable>
		<xsl:choose>
			<xsl:when test="$type='EndDate'">
				<xsl:element name="{$type}">
					<xsl:value-of select="substring-before(@Value, 'T')" />
				</xsl:element>
			</xsl:when>
			<xsl:otherwise>
				<xsl:element name="{$type}">
				<xsl:attribute name="id">
        <xsl:value-of select="@Value" />
      </xsl:attribute>
					<xsl:attribute name="N">
            <xsl:value-of select="@Value" />
          </xsl:attribute>
					<xsl:attribute name="isExcluded">
            <xsl:value-of select="@IsExcluded" />
          </xsl:attribute>
					<xsl:value-of select="@Value" />
				</xsl:element>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>

	<!-- template TreeSeries -->
	<xsl:template match="cfg:TreeSeries">
		<xsl:choose>
			<xsl:when test="@Type='ProductState'">
				<xsl:element name="EvolutionProductStateCondition">
					<xsl:apply-templates select="*" />
				</xsl:element>
			</xsl:when>
			<xsl:when test="@Type='ManufPlan'">
				<xsl:element name="EvolutionManufacturingPlanCondition">
					<xsl:apply-templates select="*" />
				</xsl:element>
			</xsl:when>
		</xsl:choose>
	</xsl:template>

	<!-- template EvolutionMilestoneCondition -->
	<xsl:template match="cfg:MilestonesTrack">
		<xsl:element name="EvolutionMilestoneCondition">
			<xsl:attribute name="type">
        <xsl:value-of select="@Discipline" />
      </xsl:attribute>
			<xsl:apply-templates select="*" />
		</xsl:element>
	</xsl:template>


	<!-- template Single -->
	<xsl:template match="cfg:Single">
		<xsl:element name="ItemRef">
		<xsl:attribute name="id">
        <xsl:value-of select="@Name" />
      </xsl:attribute>
			<xsl:attribute name="N">
        <xsl:value-of select="@Name" />
      </xsl:attribute>
			<xsl:if test="@Revision">
				<xsl:attribute name="R">
          <xsl:value-of select="@Revision" />
        </xsl:attribute>
			</xsl:if>
			<xsl:value-of select="@Name" />
		</xsl:element>
	</xsl:template>

	<!-- template Tree -->
	<xsl:template match="cfg:Tree">
		<xsl:element name="Tree">
			<xsl:apply-templates select="*" />
		</xsl:element>
	</xsl:template>

	<!-- template Root -->
	<xsl:template match="cfg:Root">
		<xsl:element name="RootItemRef">
		<xsl:attribute name="id">
        <xsl:value-of select="@Name" />
      </xsl:attribute>
			<xsl:attribute name="N">
        <xsl:value-of select="@Name" />
      </xsl:attribute>
			<xsl:if test="@Revision">
				<xsl:attribute name="R">
          <xsl:value-of select="@Revision" />
        </xsl:attribute>
			</xsl:if>
			<xsl:attribute name="isExcluded">
        <xsl:value-of select="@IsExcluded" />
      </xsl:attribute>
			<xsl:value-of select="@Name" />
		</xsl:element>
	</xsl:template>

	<!-- template Leaf -->
	<xsl:template match="cfg:Leaf">
		<xsl:element name="LeafItemRef">
		<xsl:attribute name="id">
        <xsl:value-of select="@Name" />
      </xsl:attribute>
			<xsl:attribute name="N">
        <xsl:value-of select="@Name" />
      </xsl:attribute>
			<xsl:if test="@Revision">
				<xsl:attribute name="R">
          <xsl:value-of select="@Revision" />
        </xsl:attribute>
			</xsl:if>
			<xsl:attribute name="isExcluded">
        <xsl:value-of select="@IsExcluded" />
      </xsl:attribute>
			<xsl:value-of select="@Name" />
		</xsl:element>
	</xsl:template>	

</xsl:stylesheet>
