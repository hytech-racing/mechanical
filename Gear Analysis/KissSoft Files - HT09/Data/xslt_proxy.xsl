<?xml version="1.0" encoding="ISO-8859-1"?>
<!-- Edited by XMLSpy® -->
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

  <xsl:template match="/">
    <html>
      <body>

        <!-- Gestion des déclarations de proxy -->
        <h2>List of Declared Proxy</h2>
        <table border="1">
          <tr bgcolor="#9acd32">
            <th>Proxy Unique ID</th>
            <th>Proxy Local ID</th>
            <th>Proxy Latetype</th>
            <th>Proxy hkey</th>
            <th>Proxy infotype</th>
            <th>Proxy is ID relative ?</th>
          </tr>
          <xsl:for-each select="allproxies/ProxyDeclaration">
            <tr>
              <td>
                <xsl:value-of select="uid"/>
              </td>
              <td>
                <xsl:value-of select="id"/>
              </td>
              <td>
                <xsl:value-of select="latetype"/>
              </td>
              <td>
                <xsl:value-of select="hkey"/>
              </td>
              <td>
                <xsl:value-of select="infotype"/>
              </td>
              <td>
                <xsl:value-of select="idrelative"/>
              </td>
            </tr>
          </xsl:for-each>
        </table>

        <!-- Gestion des dépendances sur chaque proxy -->
        <h2>List of dependencies owned by all proxies</h2>
        <table border="1">
          <tr bgcolor="#9acd32">
            <th>Proxy UID</th>
            <th>number of proxies referenced</th>
            <th>Dependance Info</th>
            <th>Proxy description (id - latetype - hkey - infotype)</th>
          </tr>
          <xsl:for-each select="allproxies/ProxyDependency">
            <tr>
              <td>
                <xsl:value-of select="proxyUID"/>
              </td>
              <td>
                <xsl:value-of select="ProxyReference"/>
              </td>
              <td>
                <xsl:value-of select="DependanceInfo"/>
              </td>
              <td>
                <xsl:value-of select="Proxy/@id"/>
                <xsl:text> ; </xsl:text>
                <xsl:value-of select="Proxy/@latetype"/>
                <xsl:text> ; </xsl:text>
                <xsl:value-of select="Proxy/@hkey"/>
                <xsl:text> ; </xsl:text>
                <xsl:value-of select="Proxy/@infotype"/>
              </td>
            </tr>
          </xsl:for-each>
        </table>

        <!-- Gestion des tables de chaque proxy -->
        <h2>List of tables for each Proxy</h2>
        <xsl:for-each select="allproxies/ProxyTable">
          <b> Tables for Proxy uniqueID </b>
          <b> <xsl:value-of select="@proxyUID"/> </b>

          <!-- Gestion de la table des Parents -->

            <xsl:if test="Parent/@size &gt; 0">
              <table border="1">
                <tr bgcolor="#9acd32">
                  <th>Parent table (list of Proxy UniqueID)</th>
                </tr>
                <xsl:for-each select="Parent/uid">
                <tr>
                  <td>
                    <xsl:value-of select="."/>
                  </td>
                </tr>
                </xsl:for-each>
              </table>
            </xsl:if>
            <xsl:if test="Parent/@size &lt; 1">
              <p>     Parent Table is empty</p>
            </xsl:if>

          <!-- Gestion de la table des Enfants -->
          <xsl:if test="Children/@size &gt; 0">
            <table border="1">
              <tr bgcolor="#9acd32">
                <th>Children table (list of Proxy UniqueID)</th>
              </tr>
              <xsl:for-each select="Children/uid">
                <tr>
                  <td>
                    <xsl:value-of select="."/>
                  </td>
                </tr>
              </xsl:for-each>
            </table>
          </xsl:if>
          <xsl:if test="Children/@size &lt; 1">
            <p>     Children Table is empty</p>
          </xsl:if>

          <!-- Gestion de la table des PointToDependencies -->
          <xsl:if test="PointToDependencies/@size &gt; 0">
            <table border="1">
              <tr bgcolor="#9acd32">
                <th>PointToDependencies table (list of Proxy UniqueID)</th>
              </tr>
              <xsl:for-each select="PointToDependencies/uid">
                <tr>
                  <td>
                    <xsl:value-of select="."/>
                  </td>
                </tr>
              </xsl:for-each>
            </table>
          </xsl:if>
          <xsl:if test="PointToDependencies/@size &lt; 1">
            <p>     PointToDependencies Table is empty</p>
          </xsl:if>

          <!-- Gestion de la table des PointedByDependencies -->
          <xsl:if test="PointedByDependencies/@size &gt; 0">
            <table border="1">
              <tr bgcolor="#9acd32">
                <th>PointedByDependencies table (list of Proxy UniqueID)</th>
              </tr>
              <xsl:for-each select="PointedByDependencies/uid">
                <tr>
                  <td>
                    <xsl:value-of select="."/>
                  </td>
                </tr>
              </xsl:for-each>
            </table>
            <p></p>
          </xsl:if>
          <xsl:if test="PointedByDependencies/@size &lt; 1">
            <p>     PointedByDependencies Table is empty</p>
            <p></p>
          </xsl:if>

        </xsl:for-each>

        <!-- Gestion des nodes attachés à chaque proxy -->
        <h2>List of nodes attached to each Proxy</h2>
        <table border="1">
          <tr bgcolor="#9acd32">
            <th>Proxy Unique ID</th>
            <th>Node Unique Path</th>
          </tr>
          <xsl:for-each select="allproxies/ProxyNodename">
            <tr>
              <td>
                <xsl:value-of select="@proxyuid"/>
              </td>
              <td>
                <xsl:value-of select="@nodepath"/>
              </td>
            </tr>
          </xsl:for-each>
        </table>

        <!-- Gestion de l'ordonnancement -->
        <h2>List of Ordered Proxy</h2>
        <p>the order is read from left to right</p>
          <table border="1">
          <th bgcolor="#9acd32">Proxy Order (Unique ID)</th>
          <xsl:for-each select="allproxies/ProxyCyclenOrder/ProxyOrder/uid">
            <td>
              <xsl:value-of select="."/>
            </td>
          </xsl:for-each>
        </table>

        <!-- Gestion des cycles -->
        <h2>List of Proxy in cyclicity</h2>
        <xsl:if test="allproxies/ProxyCyclenOrder/ProxyCycle/@size &gt; 0">        
        <table border="1">
          <th bgcolor="#9acd32">Proxy Cycle (Unique ID)</th>
          <xsl:for-each select="allproxies/ProxyCyclenOrder/ProxyCycle/uid">
            <td>
              <xsl:value-of select="."/>
            </td>
          </xsl:for-each>
        </table>
        </xsl:if>
        <xsl:if test="allproxies/ProxyCyclenOrder/ProxyCycle/@size &lt; 1">
          <p>There is no cycle detected</p>
        </xsl:if>

      </body>
    </html>
  </xsl:template>
</xsl:stylesheet>

