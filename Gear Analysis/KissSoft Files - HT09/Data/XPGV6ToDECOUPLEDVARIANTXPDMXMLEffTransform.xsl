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
			<!-- using this condition we stop the export of EffectivityVariant expression 
				contains element InheritedEff or OperationHandler -->
			<xsl:when
				test="cfg:Expression//cfg:InheritedEff | cfg:Expression//cfg:OperationHandler">
			</xsl:when>
			<xsl:otherwise>
				<xsl:for-each select="cfg:Expression">
				<xsl:element name="EffectivityVariant">
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
		<xsl:element name="AND_Variant">
			<xsl:for-each select="*">
				<xsl:apply-templates select="." />
			</xsl:for-each>
		</xsl:element>
	</xsl:template>


	<!-- template OR -->
	<xsl:template match="cfg:OR">
		<xsl:element name="OR_Variant">
			<xsl:for-each select="*">
				<xsl:apply-templates select="." />
			</xsl:for-each>
		</xsl:element>
	</xsl:template>

	<!-- template NOT -->
	<xsl:template match="cfg:NOT">
		<xsl:element name="NOT_Variant">
			<xsl:for-each select="*">
				<xsl:apply-templates select="." />
			</xsl:for-each>
		</xsl:element>
	</xsl:template>


	<!-- template Boolean -->
	<xsl:template match="cfg:Boolean">
		<xsl:choose>
			<xsl:when test=".='false'">
				<xsl:element name="FALSE_Variant">
				</xsl:element>
			</xsl:when>
			<xsl:when test=".='true'">
				<xsl:element name="TRUE_Variant">
				</xsl:element>
			</xsl:when>
		</xsl:choose>
	</xsl:template>


	<!-- template Feature -->
	<xsl:template match="cfg:Feature">
		<xsl:element name="VariantFeatureCondition">
			<xsl:element name="FeatureRef">
			<xsl:attribute name="id">
        <xsl:value-of select="@Name" />
      </xsl:attribute>
				<xsl:attribute name="N">
          <xsl:value-of select="@Name" />
        </xsl:attribute>
				<xsl:value-of select="@Name" />
			</xsl:element>
			<xsl:for-each select="*">
				<xsl:element name="OptionRef">
				<xsl:attribute name="id">
        <xsl:value-of select="@Name" />
      </xsl:attribute>
					<xsl:attribute name="N">
            <xsl:value-of select="@Name" />
          </xsl:attribute>
					<xsl:value-of select="@Name" />
				</xsl:element>
			</xsl:for-each>
		</xsl:element>
	</xsl:template>

</xsl:stylesheet>
