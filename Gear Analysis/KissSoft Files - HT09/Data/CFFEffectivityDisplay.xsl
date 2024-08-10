<?xml version="1.0" encoding="utf-8"?>
<xsl:stylesheet version="2.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:fo="http://www.w3.org/1999/XSL/Format" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xs="http://www.w3.org/2001/XMLSchema" xmlns:fn="http://www.w3.org/2005/xpath-functions" xmlns:cfg="urn:com:dassault_systemes:config">
  <xsl:param name="CompactView" select="FALSE" />
  <xsl:output method="text" encoding="utf-16"/>
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
    <xsl:param name="contextName"/>
    <xsl:for-each select="*">
      <xsl:if test="position() != 1">
        <xsl:text> AND </xsl:text>
      </xsl:if>
      <xsl:apply-templates select=".">
        <xsl:with-param name="contextName" select="$contextName"></xsl:with-param>
      </xsl:apply-templates>
    </xsl:for-each>
  </xsl:template>

  <!-- template OR -->
  <xsl:template match="cfg:OR">
    <xsl:param name="contextName"/>
    <xsl:for-each select="*">
      <xsl:if test="position() != 1">
        <xsl:text> OR </xsl:text>
      </xsl:if>
      <xsl:apply-templates select=".">
        <xsl:with-param name="contextName" select="$contextName"></xsl:with-param>
      </xsl:apply-templates>
    </xsl:for-each>
  </xsl:template>

  <!-- template NOT -->
  <xsl:template match="cfg:NOT">
    <xsl:param name="contextName"/>
    <xsl:for-each select="*">
      <xsl:text> NOT </xsl:text>
      <xsl:text>(</xsl:text>
      <xsl:apply-templates select=".">
        <xsl:with-param name="contextName" select="$contextName"></xsl:with-param>
      </xsl:apply-templates>
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
    <xsl:param name="contextName" select="@HolderName"/>
    <!--<xsl:value-of select="@HolderName"/>-->
    <!--<xsl:text>: </xsl:text>-->
    <xsl:for-each select="*">
      <xsl:apply-templates select=".">
        <xsl:with-param name="contextName" select="$contextName"></xsl:with-param>
      </xsl:apply-templates>
    </xsl:for-each>
  </xsl:template>

  <!-- template Feature -->
  <xsl:template match="cfg:Feature">
    <xsl:param name="contextName"/>
    <xsl:value-of select="$contextName"/>
    <!--xsl:text> </xsl:text-->
    <xsl:variable name="isexclusive">
      <xsl:choose>
        <xsl:when test="/CfgEffectivityExpression/Description/Feature[@Id=current()/@Id]/@IsExclusive='true'">
          <xsl:value-of select="'true'"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="'false'"/>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:variable>
    <xsl:text>[</xsl:text>
    <xsl:value-of select="@Name"/>
    <!--<xsl:if test="$isexclusive='true'">-->
    <xsl:text>{</xsl:text>
    <xsl:for-each select="cfg:Feature">
      <xsl:if test="position() != 1">
        <xsl:text>,</xsl:text>
      </xsl:if>
      <xsl:value-of select="@Name"/>
    </xsl:for-each>
    <xsl:text>}</xsl:text>
    <xsl:text>]</xsl:text>
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
    <xsl:param name="contextName"/>
    <xsl:value-of select="$contextName"/>
    <!--xsl:text> </xsl:text-->
    <xsl:for-each select="*">
      <xsl:apply-templates select="."/>
      <xsl:if test="position() != last()">
        <xsl:text>  </xsl:text>
      </xsl:if>
    </xsl:for-each>
  </xsl:template>

  <!-- template Date -->
  <xsl:template match="cfg:Date">
    <xsl:param name="contextName"/>
    <!--xsl:value-of select="$contextName"/-->
    <!--xsl:text> </xsl:text-->
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
    <xsl:if test="not(cfg:From)">
      <xsl:text>[</xsl:text>
      <xsl:text>&#8734;</xsl:text>
      <xsl:text>-</xsl:text>
    </xsl:if>
    <xsl:apply-templates select="*"/>
    <xsl:if test="not(cfg:To)">
      <xsl:text>-</xsl:text>
      <xsl:text>&#8734;</xsl:text>
      <xsl:text>]</xsl:text>
    </xsl:if>
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
      <xsl:variable name="dt" as="xs:dateTime" select="@Value"/>
      <!--<xsl:value-of select="$dt"/>-->
      <!--<xsl:value-of select="date:format-dateTime($dt, '[Y0001]/[M01]/[D01]')"/>-->
      <xsl:call-template name="dateformat">
        <xsl:with-param name="yyyy-mm-ddThh-mm-ss" select="$dt"></xsl:with-param>
      </xsl:call-template>
      <!--<xsl:value-of select = "substring-before(@Value,'T')" />
      <xsl:text> </xsl:text>
      <xsl:value-of select = "substring-after(@Value,'T')" />-->
    </xsl:if>
  </xsl:template>

  <xsl:template name="dateformat">
    <xsl:param name="yyyy-mm-ddThh-mm-ss"/>
    <xsl:variable name="yyyy-mm-dd" select="substring-before($yyyy-mm-ddThh-mm-ss, 'T')"/>
    <xsl:variable name="yyyy" select="substring-before($yyyy-mm-dd, '-')"/>
    <xsl:variable name="mm-dd" select="substring-after($yyyy-mm-dd, '-')"/>
    <xsl:variable name="mm" select="substring-before($mm-dd, '-')"/>
    <xsl:variable name="dd" select="substring-after($mm-dd, '-')"/>
    
    <xsl:choose>
      <xsl:when test="$mm = '01'">Jan </xsl:when>
      <xsl:when test="$mm = '02'">Feb </xsl:when>
      <xsl:when test="$mm = '03'">Mar </xsl:when>
      <xsl:when test="$mm = '04'">Apr </xsl:when>
      <xsl:when test="$mm = '05'">May </xsl:when>
      <xsl:when test="$mm = '06'">Jun </xsl:when>
      <xsl:when test="$mm = '07'">Jul </xsl:when>
      <xsl:when test="$mm = '08'">Aug </xsl:when>
      <xsl:when test="$mm = '09'">Sep </xsl:when>
      <xsl:when test="$mm = '10'">Oct </xsl:when>
      <xsl:when test="$mm = '11'">Nov </xsl:when>
      <xsl:when test="$mm = '12'">Dec </xsl:when>
    </xsl:choose>
    <xsl:value-of select="$dd"/>
    <xsl:text>, </xsl:text>
    <xsl:value-of select="$yyyy"/>
    
  </xsl:template>

  <xsl:template match="cfg:To">
    <xsl:text>-</xsl:text>
    <xsl:if test="not(contains(@Value,'T'))">
      <xsl:value-of select="@Value"/>
    </xsl:if>
    <xsl:if test="(contains(@Value,'T'))">
      <xsl:variable name="dt" as="xs:dateTime" select="@Value"/>
      <!--<xsl:value-of select="$dt"/>-->
      <!--<xsl:value-of select="date:format-dateTime($dt, '[Y0001]/[M01]/[D01]')"/>-->
      <xsl:call-template name="dateformat">
        <xsl:with-param name="yyyy-mm-ddThh-mm-ss" select="$dt"></xsl:with-param>
      </xsl:call-template>
      <!--<xsl:value-of select = "substring-before(@Value,'T')" />
      <xsl:text> </xsl:text>
      <xsl:value-of select = "substring-after(@Value,'T')" />-->
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


  <xsl:template match="cfg:Root">
    <!--<xsl:value-of select="@Name"/>
    <xsl:text>-</xsl:text>-->
    <xsl:text>[</xsl:text>
    <xsl:value-of select="@Revision"/>
    <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
    <xsl:text>]</xsl:text>
    <xsl:text> </xsl:text>
  </xsl:template>

  <!-- template TreeSeries -->
  <xsl:template match="cfg:TreeSeries">
    <xsl:param name ="type" select="'TreeSeries'"/>
    <xsl:param name="contextName"/>
    <xsl:value-of select="$contextName"/>

    <!--xsl:text> </xsl:text-->
    <xsl:for-each select="*">
      <xsl:apply-templates select=".">
        <xsl:with-param name="type"/>
      </xsl:apply-templates>

      <xsl:if test="position() != last()">
        <xsl:text> OR </xsl:text>
      </xsl:if>

    </xsl:for-each>
  </xsl:template>

  <!-- template MilestonesTrack -->
  <xsl:template match="cfg:MilestonesTrack">
    <xsl:param name ="type" select="'MilestonesTrack'"/>
    <xsl:for-each select="*">
      <xsl:apply-templates select=".">
        <xsl:with-param name ="type" select="$type"/>
      </xsl:apply-templates>
    </xsl:for-each>
  </xsl:template>


  <!-- template SingleValue -->
  <xsl:template match="cfg:Single">
    <!--xsl:value-of select="@Name"/-->
    <!--xsl:text>-</xsl:text-->
    <xsl:text>[</xsl:text>
    <xsl:value-of select="@Revision"/>
    <xsl:text>]</xsl:text>
    <xsl:text> </xsl:text>
  </xsl:template>

  <!-- template Tree -->
  <xsl:template match="cfg:Tree">
    <xsl:param name="type"/>
    <xsl:for-each select="cfg:Root">
      <xsl:apply-templates select=".">
        <xsl:with-param name="type" select="$type"></xsl:with-param>
      </xsl:apply-templates>
    </xsl:for-each>

    <xsl:for-each select="cfg:Leaf">
      <xsl:if test="position() = 1">
        <xsl:text> { </xsl:text>
      </xsl:if>
      <xsl:apply-templates select=".">
        <xsl:with-param name="type" select="$type"></xsl:with-param>
      </xsl:apply-templates>
      <xsl:if test="position() != last()">
        <xsl:text> , </xsl:text>
      </xsl:if>
      <xsl:if test="position() = last()">
        <xsl:text> } </xsl:text>
      </xsl:if>
    </xsl:for-each>

  </xsl:template>

  <xsl:template match="cfg:Root">
    <xsl:param name="type"/>
    <xsl:choose>
      <xsl:when test="$type = 'MilestonesTrack'">
        <xsl:value-of select="@Name"/>
        <xsl:text>-</xsl:text>
      </xsl:when>
    </xsl:choose>

    <xsl:text>[</xsl:text>
    <xsl:value-of select="@Revision"/>
    <xsl:choose>
      <xsl:when test="@IsExcluded='true'">
        <xsl:text>*</xsl:text>
        <xsl:text> </xsl:text>
      </xsl:when>
    </xsl:choose>
    <!--xsl:text disable-output-escaping="yes">&lt;</xsl:text-->
    <xsl:text>-</xsl:text>
    <xsl:text>&#8734;</xsl:text>
    <xsl:text>]</xsl:text>
    <xsl:text> </xsl:text>
  </xsl:template>


  <xsl:template match="cfg:Leaf">
    <xsl:param name="type"/>
    <xsl:choose>
      <xsl:when test="$type = 'MilestonesTrack'">
        <xsl:value-of select="@Name"/>
        <xsl:text>-</xsl:text>
      </xsl:when>
    </xsl:choose>
    <xsl:text>[</xsl:text>
    <xsl:value-of select="@Revision"/>
    <xsl:choose>
      <xsl:when test="@IsExcluded='false'">
        <xsl:text>*</xsl:text>
        <xsl:text> </xsl:text>
      </xsl:when>
    </xsl:choose>
    <xsl:text>]</xsl:text>
  </xsl:template>


</xsl:stylesheet>
