<?xml version="1.0" encoding="utf-8"?>
<xsl:stylesheet version="2.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:fo="http://www.w3.org/1999/XSL/Format" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xs="http://www.w3.org/2001/XMLSchema" xmlns:fn="http://www.w3.org/2005/xpath-functions" xmlns:cfg="urn:com:dassault_systemes:config">
  <xsl:param name="CompactView" select="FALSE" />
  <xsl:output method="text" encoding="UTF-16"/>
  <!-- template CfgEffectivityExpression -->
  <xsl:template match="cfg:CfgEffectivityExpression">
    <xsl:for-each select="cfg:Expression">
      <xsl:apply-templates select="."/>
    </xsl:for-each>
  </xsl:template>
  <!-- template CfgEffectivityExpression -->

  <!-- template CfgChangeExpression -->
  <xsl:template match="cfg:CfgChangeExpression">
    <xsl:for-each select="cfg:Expression">
      <xsl:apply-templates select="."/>
    </xsl:for-each>
  </xsl:template>
  <!-- template CfgChangeExpression -->

  <!-- template CfgFilterExpression -->
  <xsl:template match="cfg:CfgFilterExpression">
    <xsl:for-each select="cfg:FilterSelection">
      <xsl:apply-templates select="."/>
    </xsl:for-each>
  </xsl:template>
  <!-- template CfgFilterExpression -->

  <!-- template Expression -->
  <xsl:template match="cfg:Expression">
    <xsl:for-each select="*">
      <xsl:apply-templates select="."/>
    </xsl:for-each>
  </xsl:template>
  <!-- template Expression -->

  <!-- template FilterSelection -->
  <xsl:template match="cfg:FilterSelection">
    <xsl:for-each select="*">
      <xsl:apply-templates select="."/>
      <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
  </xsl:template>
  <!-- template FilterSelection -->

  <!-- template AND -->
  <xsl:template match="cfg:AND">
    <xsl:for-each select="*">
      <xsl:if test="position() != 1">
        <xsl:text> AND </xsl:text>
      </xsl:if>
      <xsl:apply-templates select="."/>
    </xsl:for-each>
  </xsl:template>

  <!-- template OR -->
  <xsl:template match="cfg:OR">
    <xsl:for-each select="*">
      <xsl:if test="position() != 1">
        <xsl:text> OR </xsl:text>
      </xsl:if>
      <xsl:apply-templates select="."/>
    </xsl:for-each>
  </xsl:template>

  <!-- template NOT -->
  <xsl:template match="cfg:NOT">
    <xsl:for-each select="*">
      <xsl:text> NOT </xsl:text>
      <xsl:text>(</xsl:text>
      <xsl:apply-templates select="."/>
      <xsl:text>)</xsl:text>
    </xsl:for-each>
  </xsl:template>

  <!-- template MultiContextView -->
  <xsl:template match="cfg:MultiContextView">
    <xsl:for-each select="*">
      <xsl:apply-templates select="."/>
      <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
  </xsl:template>

  <!-- template Context -->
  <xsl:template match="cfg:Context">
   <!-- <xsl:value-of select="@HolderName"/>-->
   
<xsl:variable name="withDescription">
      <xsl:choose>
        <xsl:when test="/cfg:CfgEffectivityExpression/cfg:Description/cfg:Context[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
		<xsl:when test="/cfg:CfgChangeExpression/cfg:Description/cfg:Context[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
		<xsl:when test="/cfg:CfgFilterExpression/cfg:Description/cfg:Context[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="'false'"/>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:variable>
	
         <xsl:choose>
        <xsl:when test="$withDescription='true' and /cfg:CfgEffectivityExpression/cfg:Description/cfg:Context[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="/cfg:CfgEffectivityExpression/cfg:Description/cfg:Context[@DescId=current()/@DescId]/@DisplayName"/>
        </xsl:when>
		<xsl:when test="$withDescription='true' and /cfg:CfgChangeExpression/cfg:Description/cfg:Context[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="/cfg:CfgChangeExpression/cfg:Description/cfg:Context[@DescId=current()/@DescId]/@DisplayName"/>
        </xsl:when>
		<xsl:when test="$withDescription='true' and /cfg:CfgFilterExpression/cfg:Description/cfg:Context[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="/cfg:CfgFilterExpression/cfg:Description/cfg:Context[@DescId=current()/@DescId]/@DisplayName"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="@HolderName"/>
        </xsl:otherwise>
      </xsl:choose>
   
    <xsl:text>: </xsl:text>
    <xsl:for-each select="*">
      <xsl:apply-templates select="."/>
    </xsl:for-each>
  </xsl:template>

  <!-- template Feature -->
  <xsl:template match="cfg:Feature">
    <xsl:variable name="isexclusive">
      <xsl:choose>
        <xsl:when test="/CfgEffectivityExpression/Description/Feature[@Id=current()/@Id]/@IsExclusive='true'">
          <xsl:value-of select="'true'"/>
        </xsl:when>
		<xsl:when test="/CfgChangeExpression/Description/Feature[@Id=current()/@Id]/@IsExclusive='true'">
          <xsl:value-of select="'true'"/>
        </xsl:when>
		<xsl:when test="/CfgFilterExpression/Description/Feature[@Id=current()/@Id]/@IsExclusive='true'">
          <xsl:value-of select="'true'"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="'false'"/>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:variable>
      <xsl:variable name="withDescription">
      <xsl:choose>
        <xsl:when test="/cfg:CfgEffectivityExpression/cfg:Description/cfg:Feature[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
		      <xsl:when test="/cfg:CfgChangeExpression/cfg:Description/cfg:Feature[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
		      <xsl:when test="/cfg:CfgFilterExpression/cfg:Description/cfg:Feature[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="'false'"/>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:variable>
    
    <xsl:choose>
      <xsl:when test="$withDescription='true' and /cfg:CfgEffectivityExpression/cfg:Description/cfg:Feature[@DescId=current()/@DescId]/@DisplayName!=''">
        <xsl:value-of select="/cfg:CfgEffectivityExpression/cfg:Description/cfg:Feature[@DescId=current()/@DescId]/@DisplayName"/>
      </xsl:when>
	  <xsl:when test="$withDescription='true' and /cfg:CfgChangeExpression/cfg:Description/cfg:Feature[@DescId=current()/@DescId]/@DisplayName!=''">
        <xsl:value-of select="/cfg:CfgChangeExpression/cfg:Description/cfg:Feature[@DescId=current()/@DescId]/@DisplayName"/>
      </xsl:when>
	  <xsl:when test="$withDescription='true' and /cfg:CfgFilterExpression/cfg:Description/cfg:Feature[@DescId=current()/@DescId]/@DisplayName!=''">
        <xsl:value-of select="/cfg:CfgFilterExpression/cfg:Description/cfg:Feature[@DescId=current()/@DescId]/@DisplayName"/>
      </xsl:when>
      <xsl:otherwise>
        <xsl:value-of select="@Name"/>
      </xsl:otherwise>
    </xsl:choose>
    <!--<xsl:if test="$isexclusive='true'">-->
    <xsl:text>{</xsl:text>
    <xsl:for-each select="cfg:Feature">
      <xsl:if test="position() != 1">
        <xsl:text>,</xsl:text>
      </xsl:if>
     
      <xsl:choose>
        <xsl:when test="$withDescription='true' and /cfg:CfgEffectivityExpression/cfg:Description/cfg:Option[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="/cfg:CfgEffectivityExpression/cfg:Description/cfg:Option[@DescId=current()/@DescId]/@DisplayName"/>
        </xsl:when>
		<xsl:when test="$withDescription='true' and /cfg:CfgChangeExpression/cfg:Description/cfg:Option[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="/cfg:CfgChangeExpression/cfg:Description/cfg:Option[@DescId=current()/@DescId]/@DisplayName"/>
        </xsl:when>
		<xsl:when test="$withDescription='true' and /cfg:CfgFilterExpression/cfg:Description/cfg:Option[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="/cfg:CfgFilterExpression/cfg:Description/cfg:Option[@DescId=current()/@DescId]/@DisplayName"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="@Name"/>
        </xsl:otherwise>
      </xsl:choose>

    </xsl:for-each>
    <xsl:text>}</xsl:text>
    <!--</xsl:if>-->
    <!--<xsl:if test="$isexclusive='false'">
      <xsl:value-of select="concat('.',cfg:Feature/@Name,'')"/>
    </xsl:if>-->
    <xsl:text/>
  </xsl:template>

  <!-- template InheritedEff -->
  <xsl:template match="cfg:InheritedEff">
    <xsl:text>[</xsl:text>
    <xsl:value-of select="@FilterableName"/>
    <xsl:text>] </xsl:text>
  </xsl:template>

  <!-- template OperationHandler -->
  <xsl:template match="cfg:OperationHandler">
    <xsl:text>$</xsl:text>
    <xsl:value-of select="@Name"/>
  </xsl:template>

  <!-- template Series -->
  <xsl:template match="cfg:Series">
    <xsl:if test="$CompactView">
      <xsl:text></xsl:text>
    </xsl:if>
    <xsl:if test="not($CompactView)">
      <xsl:value-of select="@Type"/>
    </xsl:if>
    <xsl:for-each select="*">
      <xsl:apply-templates select="."/>
      <xsl:if test="position() != last()">
        <xsl:text>  </xsl:text>
      </xsl:if>
    </xsl:for-each>
  </xsl:template>

  <!-- template Date -->
  <xsl:template match="cfg:Date">
    <xsl:for-each select="*">
      <xsl:apply-templates select="."/>
    </xsl:for-each>
  </xsl:template>

  <!-- template SingleValue -->
  <xsl:template match="cfg:SingleValue">
    <xsl:choose>
      <xsl:when test="@Value='9999-01-01T00:00:00'">
        <xsl:text>BSF View</xsl:text>
      </xsl:when>
      <xsl:otherwise>

        <xsl:text>[</xsl:text>
        <xsl:if test="not(contains(@Value,'T'))">
          <xsl:value-of select="@Value"/>
        </xsl:if>
        <xsl:if test="(contains(@Value,'T'))">
          <xsl:value-of select = "substring-before(@Value,'T')" />
          <xsl:text> </xsl:text>
          <xsl:value-of select = "substring-after(@Value,'T')" />
        </xsl:if>

        <xsl:text>]</xsl:text>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:template>

  <!-- template Interval -->
  <xsl:template match="cfg:Interval">
    <xsl:if test="not(cfg:From)">[INF</xsl:if>
    <xsl:apply-templates/>
    <xsl:if test="not(cfg:To)"> - INF]</xsl:if>
  </xsl:template>

  <xsl:template match="cfg:From">
    <xsl:choose>
      <xsl:when test="@IsExcluded='true'">
        <xsl:text>]</xsl:text>
      </xsl:when>
      <xsl:otherwise>
        <xsl:text>[</xsl:text>
      </xsl:otherwise>
    </xsl:choose>
    <xsl:if test="not(contains(@Value,'T'))">
      <xsl:value-of select="@Value"/>
    </xsl:if>
    <xsl:if test="(contains(@Value,'T'))">
      <xsl:value-of select = "substring-before(@Value,'T')" />
      <xsl:text> </xsl:text>
      <xsl:value-of select = "substring-after(@Value,'T')" />
    </xsl:if>
  </xsl:template>

  <xsl:template match="cfg:To">
    <xsl:text> - </xsl:text>
    <xsl:if test="not(contains(@Value,'T'))">
      <xsl:value-of select="@Value"/>
    </xsl:if>
    <xsl:if test="(contains(@Value,'T'))">
      <xsl:value-of select = "substring-before(@Value,'T')" />
      <xsl:text> </xsl:text>
      <xsl:value-of select = "substring-after(@Value,'T')" />
    </xsl:if>
    <xsl:choose>
      <xsl:when test="@IsExcluded='true'">
        <xsl:text>[</xsl:text>
      </xsl:when>
      <xsl:otherwise>
        <xsl:text>]</xsl:text>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:template>

  <!-- template TreeSeries -->
  <xsl:template match="cfg:TreeSeries">
    <xsl:choose>
      <xsl:when test="@Type='ProductState'">
        <xsl:if test="$CompactView">
          <xsl:text></xsl:text>
        </xsl:if>
        <xsl:if test="not($CompactView)">
          <xsl:text>Model Version</xsl:text>
          <xsl:text> </xsl:text>
        </xsl:if>
        
      </xsl:when>
      <xsl:when test="@Type='ManufPlan'">
        <xsl:if test="$CompactView">
          <xsl:text></xsl:text>
        </xsl:if>
        <xsl:if test="not($CompactView)">
          <xsl:text>Manufacturing Plan</xsl:text>
          <xsl:text> </xsl:text>
        </xsl:if>
      </xsl:when>
      <xsl:otherwise>
        <xsl:value-of select="@Type"/>
      </xsl:otherwise>
    </xsl:choose>
    <xsl:for-each select="*">
      <xsl:apply-templates select="."/>
      <xsl:if test="position() != last()">
        <xsl:text> OR </xsl:text>
      </xsl:if>
    </xsl:for-each>
  </xsl:template>

  
    <!-- template MilestonesTrack -->
  <xsl:template match="cfg:MilestonesTrack">
  <xsl:if test="$CompactView">
     <xsl:text></xsl:text>
  </xsl:if>
  <xsl:if test="not($CompactView)">
    <xsl:text>Milestone</xsl:text>
    <xsl:text> </xsl:text>
  </xsl:if>
    <xsl:for-each select="*">
      <xsl:apply-templates select="."/>
      <xsl:if test="position() != last()">
        <xsl:text>  </xsl:text>
      </xsl:if>
    </xsl:for-each>
  </xsl:template>

  <!-- template SingleValue -->
  <xsl:template match="cfg:Single">
    <xsl:variable name="withDescription">
      <xsl:choose>
        <xsl:when test="/cfg:CfgEffectivityExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
		 <xsl:when test="/cfg:CfgChangeExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
		 <xsl:when test="/cfg:CfgFilterExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="'false'"/>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:variable>

    <xsl:choose>
      <xsl:when test="$withDescription='true' and /cfg:CfgEffectivityExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
        <xsl:value-of select="/cfg:CfgEffectivityExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName"/>
      </xsl:when>
	       <xsl:when test="$withDescription='true' and /cfg:CfgChangeExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
        <xsl:value-of select="/cfg:CfgChangeExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName"/>
      </xsl:when>
	       <xsl:when test="$withDescription='true' and /cfg:CfgFilterExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
        <xsl:value-of select="/cfg:CfgFilterExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName"/>
      </xsl:when>
      <xsl:otherwise>
        <xsl:value-of select="@Name"/>
      </xsl:otherwise>
    </xsl:choose>
    <xsl:text>-</xsl:text>
    <xsl:value-of select="@Revision"/>
    <xsl:text> </xsl:text>
  </xsl:template>

  <!-- template Tree -->
  <xsl:template match="cfg:Tree">

    <xsl:for-each select="cfg:Root">
      <xsl:apply-templates select="."/>
    </xsl:for-each>

    <xsl:for-each select="cfg:Leaf">
      <xsl:if test="position() = 1">
        <xsl:text> { </xsl:text>
      </xsl:if>
      <xsl:apply-templates select="."/>
      <xsl:if test="position() != last()">
        <xsl:text> , </xsl:text>
      </xsl:if>
      <xsl:if test="position() = last()">
        <xsl:text> } </xsl:text>
      </xsl:if>
    </xsl:for-each>

  </xsl:template>

  <xsl:template match="cfg:Root">
    <xsl:variable name="withDescription">
      <xsl:choose>
        <xsl:when test="/cfg:CfgEffectivityExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
		<xsl:when test="/cfg:CfgChangeExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
		<xsl:when test="/cfg:CfgFilterExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="'false'"/>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:variable>

    <xsl:choose>
      <xsl:when test="$withDescription='true' and /cfg:CfgEffectivityExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
        <xsl:value-of select="/cfg:CfgEffectivityExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName"/>
      </xsl:when>
	  <xsl:when test="$withDescription='true' and /cfg:CfgChangeExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
        <xsl:value-of select="/cfg:CfgChangeExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName"/>
      </xsl:when>
	  <xsl:when test="$withDescription='true' and /cfg:CfgFilterExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
        <xsl:value-of select="/cfg:CfgFilterExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName"/>
      </xsl:when>
      <xsl:otherwise>
        <xsl:value-of select="@Name"/>
      </xsl:otherwise>
    </xsl:choose>
    
    
    <xsl:text>-</xsl:text>
    <xsl:value-of select="@Revision"/>
    <xsl:choose>
      <xsl:when test="@IsExcluded='true'">
        <xsl:text>*</xsl:text>
        <xsl:text> </xsl:text>
      </xsl:when>
    </xsl:choose>
    <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
    <xsl:text> </xsl:text>
  </xsl:template>


  <xsl:template match="cfg:Leaf">
    
    <xsl:variable name="withDescription">
      <xsl:choose>
        <xsl:when test="/cfg:CfgEffectivityExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
		       <xsl:when test="/cfg:CfgChangeExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
		       <xsl:when test="/cfg:CfgFilterExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
          <xsl:value-of select="'true'"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="'false'"/>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:variable>

    <xsl:choose>
      <xsl:when test="$withDescription='true' and /cfg:CfgEffectivityExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
        <xsl:value-of select="/cfg:CfgEffectivityExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName"/>
      </xsl:when>
	  <xsl:when test="$withDescription='true' and /cfg:CfgChangeExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
        <xsl:value-of select="/cfg:CfgChangeExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName"/>
      </xsl:when>
	  <xsl:when test="$withDescription='true' and /cfg:CfgFilterExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName!=''">
        <xsl:value-of select="/cfg:CfgFilterExpression/cfg:Description/cfg:TreeSeries[@DescId=current()/@DescId]/@DisplayName"/>
      </xsl:when>
      <xsl:otherwise>
        <xsl:value-of select="@Name"/>
      </xsl:otherwise>
    </xsl:choose>
    
    <xsl:text>-</xsl:text>
    <xsl:value-of select="@Revision"/>
    <xsl:choose>
      <xsl:when test="@IsExcluded='false'">
        <xsl:text>*</xsl:text>
        <xsl:text> </xsl:text>
      </xsl:when>
    </xsl:choose>
  </xsl:template>


</xsl:stylesheet>
