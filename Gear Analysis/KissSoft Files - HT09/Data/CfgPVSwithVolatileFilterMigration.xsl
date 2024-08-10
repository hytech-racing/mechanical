<?xml version="1.0" encoding="utf-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:fo="http://www.w3.org/1999/XSL/Format" xmlns:fn="http://www.w3.org/2005/xpath-functions" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:cfg="urn:com:dassault_systemes:config" xsi:schemaLocation="urn:com:dassault_systemes:config CfgFilterExpression.xsd" exclude-result-prefixes="fn fo" version="1.0">
  <xsl:output method="xml" version="1.0" encoding="utf-8" omit-xml-declaration="yes" indent="yes"/>

  <!-- template CfgExpression -->
  <xsl:template match="cfg:CfgExpression">
    <xsl:if test="cfg:QuerySelection/cfg:Date">
      <CfgFilterExpression xsi:schemaLocation="urn:com:dassault_systemes:config CfgFilterExpression.xsd">
        <xsl:apply-templates select="cfg:QuerySelection" mode="QuerySelectionDWS"/>
      </CfgFilterExpression>
    </xsl:if>
    <xsl:if test="cfg:QuerySelection/cfg:Characteristic or cfg:QuerySelection/cfg:State">
      <CfgFilterExpression xsi:schemaLocation="urn:com:dassault_systemes:config CfgFilterExpression.xsd">
        <xsl:apply-templates select="cfg:QuerySelection" mode="QuerySelectionCfgChg"/>
      </CfgFilterExpression>
    </xsl:if>
  </xsl:template>

  <!-- template QuerySelection DWS-->
  <xsl:template match="cfg:QuerySelection" mode="QuerySelectionDWS">
    <xsl:choose>
      <xsl:when test="@QueryMode='Standard'">
        <FilterSelection SelectionMode="Strict">
          <xsl:choose>
            <xsl:when test="cfg:ChangeRef">
              <xsl:if test="cfg:Date">
                <xsl:apply-templates select="cfg:Date" mode="SingleChgRefDate"/>
              </xsl:if>
              <xsl:apply-templates select="cfg:ChangeRef"/>
            </xsl:when>
            <xsl:otherwise>
              <xsl:apply-templates select="cfg:Date"/>
            </xsl:otherwise>
          </xsl:choose>
        </FilterSelection>
      </xsl:when>
      <xsl:otherwise>
        <FilterSelection SelectionMode="150%">
          <xsl:choose>
            <xsl:when test="cfg:ChangeRef">
              <xsl:if test="cfg:Date">
                <xsl:apply-templates select="cfg:Date" mode="SingleChgRefDate"/>
              </xsl:if>
              <xsl:apply-templates select="cfg:ChangeRef"/>
            </xsl:when>
            <xsl:otherwise>
              <xsl:apply-templates select="cfg:Date"/>
            </xsl:otherwise>
          </xsl:choose>
        </FilterSelection>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:template>

  <!-- template QuerySelection CfgChg-->
  <xsl:template match="cfg:QuerySelection" mode="QuerySelectionCfgChg">
    <xsl:choose>
      <xsl:when test="@QueryMode='Standard'">
        <FilterSelection SelectionMode="Strict">
          <xsl:if test="cfg:Characteristic">
            <xsl:apply-templates select="cfg:Characteristic"/>
          </xsl:if>
          <!--<xsl:if test="cfg:ChangeRef">
            <xsl:apply-templates select="cfg:ChangeRef"/>
          </xsl:if>-->
          <xsl:if test="cfg:State">
            <xsl:apply-templates select="cfg:State"/>
          </xsl:if>
        </FilterSelection>
      </xsl:when>
      <xsl:otherwise>
        <FilterSelection SelectionMode="150%">
          <xsl:if test="cfg:Characteristic">
            <xsl:apply-templates select="cfg:Characteristic"/>
          </xsl:if>
          <xsl:if test="cfg:State">
            <xsl:apply-templates select="cfg:State"/>
          </xsl:if>
        </FilterSelection>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:template>

  <!-- template SingleChgRefDate -->
  <xsl:template match="cfg:Date" mode="SingleChgRefDate">
    <Date DescId="1">
      <SingleValue Value="9999-01-01T00:00:00"/>
    </Date>
  </xsl:template>

  <!-- template Date -->
  <xsl:template match="cfg:Date">
    <xsl:choose>
      <xsl:when test="cfg:Interval">
        <Date DescId="1">
          <xsl:apply-templates select="cfg:Interval"/>
        </Date>
      </xsl:when>
      <xsl:otherwise>
        <Date DescId="1">
          <xsl:apply-templates select="cfg:SingleValue"/>
        </Date>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:template>

  <!-- template Interval -->
  <xsl:template match="cfg:Interval">
    <Interval>
      <xsl:apply-templates select="cfg:LowerValue"/>
      <xsl:apply-templates select="cfg:UpperValue"/>
    </Interval>
  </xsl:template>

  <!-- template LowerValue -->
  <xsl:template match="cfg:LowerValue">
    <xsl:if test="not(.='INF')">
      <xsl:variable name="date" select="."/>
      <From Value="{$date}T00:00:00"/>
    </xsl:if>
  </xsl:template>

  <!-- template UpperValue -->
  <xsl:template match="cfg:UpperValue">
    <!--    <xsl:variable name="date" select="."/>-->
    <xsl:if test="not(.='INF')">
      <xsl:variable name="date" select="."/>
      <To Value="{$date}T23:59:59"/>
    </xsl:if>
  </xsl:template>

  <!-- template SingleValue -->
  <xsl:template match="cfg:SingleValue">
    <xsl:variable name="date" select="."/>
    <SingleValue Value="{$date}T00:00:00"/>
  </xsl:template>

  <!-- template Characteristic -->
  <xsl:template match="cfg:Characteristic">
    <Feature Type="ConfigFeature" Name="{@Name}">
      <xsl:for-each select="cfg:Characteristic">
        <Feature Type="ConfigFeature" Name="{@Name}"/>
      </xsl:for-each>
    </Feature>
  </xsl:template>

  <!-- template ChangeRef -->
  <xsl:template match="cfg:ChangeRef">
    <OperationHandler Type="DWS" Name="{@Name}" OperationHandlerId="0"/>
  </xsl:template>

  <!-- template State -->
  <xsl:template match="cfg:State">
    <!-- VET Without "Tree" TAG
    <TreeSeries Type="ProductState" Name="DictionaryUUID">
      <xsl:if test="cfg:SingleValue">
        <xsl:apply-templates select="cfg:SingleValue" mode="PSSingleValue"/>
      </xsl:if>
      <xsl:if test="cfg:Interval">
        <xsl:apply-templates select="cfg:Interval" mode="PSInterval"/>
      </xsl:if>
    </TreeSeries>-->
      <xsl:if test="cfg:SingleValue">
        <xsl:apply-templates select="cfg:SingleValue" mode="PSSingleValue"/>
      </xsl:if>
      <xsl:if test="cfg:Interval">
        <xsl:apply-templates select="cfg:Interval" mode="PSInterval"/>
      </xsl:if>
  </xsl:template>

  <!-- template Single Value>-->
  <xsl:template match="cfg:SingleValue" mode="PSSingleValue">
    <xsl:variable name="RevIdx" select="."/>
      <TreeSeriesRoot_SingleValue MGRSerialValue="{$RevIdx}"/>
  </xsl:template>

  <!-- template Interval -->
  <xsl:template match="cfg:Interval" mode="PSInterval">
    <!-- VET Without "Tree" TAG
    <Tree>
      <xsl:apply-templates select="cfg:LowerValue" mode="PSLowerValue"/>
      <xsl:apply-templates select="cfg:UpperValue" mode="PSUpperValue"/>
    </Tree> -->
      <xsl:apply-templates select="cfg:LowerValue" mode="PSLowerValue"/>
      <xsl:apply-templates select="cfg:UpperValue" mode="PSUpperValue"/>
  </xsl:template>

  <!-- template LowerValue 
  <xsl:template match="cfg:LowerValue">
    <xsl:variable name="date" select="."/>
    <From Value="{$date}"/>
  </xsl:template>-->

  <!-- template UpperValue 
  <xsl:template match="cfg:UpperValue">
    <xsl:variable name="date" select="."/>
    <To Value="{$date}"/>
  </xsl:template>-->

  <!-- template LowerValue PS-->
  <xsl:template match="cfg:LowerValue" mode="PSLowerValue">    
      <xsl:variable name="RevIdx" select="."/>
      <TreeSeriesRoot_LowerValue MGRSerialValue="{$RevIdx}"/>   
  </xsl:template>

  <!-- template UpperValue PS-->
  <xsl:template match="cfg:UpperValue" mode="PSUpperValue">    
      <xsl:variable name="RevIdx" select="."/>
      <TreeSeriesRoot_UpperValue MGRSerialValue="{$RevIdx}"/>   
  </xsl:template>

</xsl:stylesheet>
