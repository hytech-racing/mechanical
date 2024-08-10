<?xml version='1.0'?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:template match="/">
    <html>
      <body>
        <h3 align="center"><xsl:value-of select="SRSData/Title"/></h3>

        <table align="center" border="1" cellspacing="0" cellpadding="4">
          <tr>
            <th colspan="30" align="center"><xsl:value-of select="SRSData/SystemInfo/ITEM1_HEADER"/></th>
              <td width="192" colspan="30" align="center">
                <xsl:value-of select="SRSData/SystemInfo/ITEM1_VALUE"/>
              </td>
          </tr>
          <tr>
            <th colspan="30" align="center"><xsl:value-of select="SRSData/SystemInfo/ITEM2_HEADER"/></th>
              <td width="192" colspan="30" align="center">
                <xsl:value-of select="SRSData/SystemInfo/ITEM2_VALUE"/>
              </td>
          </tr>
        </table>
        <br/>
        
        <h3 align="center"><xsl:value-of select="SRSData/FeaturesInfo/TITLE"/></h3>
        <table align="center" border="1" cellspacing="0" cellpadding="4">
          <tr bgcolor="#9acd32">
            <th width="250" colspan="30" align="center"><xsl:value-of select="SRSData/FeaturesInfo/ITEM1_HEADER"/></th>
            <th width="250" colspan="30" align="center"><xsl:value-of select="SRSData/FeaturesInfo/ITEM2_HEADER"/></th>
            <th width="192" colspan="30" align="center"><xsl:value-of select="SRSData/FeaturesInfo/ITEM3_HEADER"/></th>
          </tr>
          <xsl:for-each select="SRSData/FeaturesInfo/SRSFeature">
          <tr>
            <td width="250" colspan="30" align="center">
              <xsl:value-of select="ITEM1_VALUE"/>
            </td>
            <td width="250" colspan="30" align="center">
              <xsl:value-of select="ITEM2_VALUE"/>
            </td>
            <td width="192" colspan="30" align="center">
              <xsl:value-of select="ITEM3_VALUE"/>
            </td>
          </tr>
          </xsl:for-each>
        </table>
        <br/>

        <h3 align="center"><xsl:value-of select="SRSData/PlaneInfo/Title"/></h3>
        <table align="center" border="1" cellspacing="0" cellpadding="4">
          <tr>
            <th colspan="30" align="center"><xsl:value-of select="SRSData/PlaneInfo/ITEM1_HEADER"/></th>
              <td width="192" colspan="30" align="center">
                <xsl:value-of select="SRSData/PlaneInfo/ITEM1_VALUE"/>
              </td>
          </tr>
          <tr>
            <th colspan="30" align="center"><xsl:value-of select="SRSData/PlaneInfo/ITEM2_HEADER"/></th>
              <td width="192" colspan="30" align="center">
                <xsl:value-of select="SRSData/PlaneInfo/ITEM2_VALUE"/>
              </td>
          </tr>
          <tr>
            <th colspan="30" align="center"><xsl:value-of select="SRSData/PlaneInfo/ITEM3_HEADER"/></th>
              <td width="192" colspan="30" align="center">
                <xsl:value-of select="SRSData/PlaneInfo/ITEM3_VALUE"/>
              </td>
          </tr>
        </table>
        <br/>
        <table align="center" border="1" cellspacing="0" cellpadding="4">
          <tr bgcolor="#9acd32">
            <th width="192" colspan="30" align="center"><xsl:value-of select="SRSData/PlaneInfo/Plane/ITEM1_HEADER"/></th>
            <th width="192" colspan="30" align="center"><xsl:value-of select="SRSData/PlaneInfo/Plane/ITEM2_HEADER"/></th>
            <th width="192" colspan="30" align="center"><xsl:value-of select="SRSData/PlaneInfo/Plane/ITEM3_HEADER"/></th>
            <th width="192" colspan="30" align="center"><xsl:value-of select="SRSData/PlaneInfo/Plane/ITEM4_HEADER"/></th>
            <th width="192" colspan="30" align="center"><xsl:value-of select="SRSData/PlaneInfo/Plane/ITEM5_HEADER"/></th>
          </tr>
          <xsl:for-each select="SRSData/PlaneInfo/Plane/SRSPlane">
            <tr>
              <td width="192" colspan="30" align="center">
                <xsl:value-of select="ITEM1_VALUE"/>
              </td>
              <td width="192" colspan="30" align="center">
                <xsl:value-of select="ITEM2_VALUE"/>
              </td>
              <td width="192" colspan="30" align="center">
                <xsl:value-of select="ITEM3_VALUE"/>
              </td>
              <td width="192" colspan="30" align="center">
                <xsl:value-of select="ITEM4_VALUE"/>
              </td>
              <td width="192" colspan="30" align="center">
                <xsl:value-of select="ITEM5_VALUE"/>
              </td>
            </tr>
          </xsl:for-each>
        </table>
      </body>
    </html>
  </xsl:template>
</xsl:stylesheet>
