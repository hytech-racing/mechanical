<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="2.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:fo="http://www.w3.org/1999/XSL/Format" xmlns:xs="http://www.w3.org/2001/XMLSchema" xmlns:fn="http://www.w3.org/2005/02/xpath-functions" xmlns:xdt="http://www.w3.org/2005/02/xpath-datatypes">

   <xsl:output method="html" indent="yes" encoding="UTF-8"/>

  
   <!--  Variable enabling to access to CATIA root installation directory -->
   <!--   * Path to CATIA download code -->

   <xsl:variable name="Instal_Dir" select="/Set/@Instal_Dir" />

   <!-- ============================================= -->
   <!--  Template corresponding to root Execution node  -->
   <!-- ============================================= -->
   <!-- <Execution Id="2" Name="Report" version="0.1"> -->

   <xsl:template match="/">
      <!-- 1- Initialization -->
      <!--   1-1 HTML header -->

      <html>

         <!--   1-2 style sheet for document -->

         <body link="#0000FF" vlink="#800080" BGCOLOR="white" background="{concat($Instal_Dir,'/resources/graphic/Cke_paterne.gif')}">
            <style>
               .Entete {font: 40 pt bold; color: blue; text-align: center}
               .Menu {font: 20 pt; text-align: right; text-align: bottom}
               .Normal {font: 12pt bold;	text-align: left;color: red; text-align: bottom}
               .Normal2 {font: 20pt bold;	text-align: left; color: green; text-align: bottom}
               .Parameter {font: 14pt; color:red; text-align: left;font-style:italic}
               .Input { font-weight:bold;font-family="Arial";color:#314292;font-size=15;background-color: #D8D8D8;}
               .Comment { font-weight:bold;font-family="Arial";color:blue;font-size=15;background-color: #D8D8D8;}
               .hyperlink{font-weight:bold;font-family="Arial";color:blue;font-size=12}
            </style>

            <!-- 1-3 Define backgound image and document title -->

            <img src="{concat($Instal_Dir,'/resources/graphic/Cke_ds_logo.gif')}" BORDER="0"/>

            <head>
               <title>PLM Exchange Downward Report</title>
               <meta name="GENERATOR" content="PLM Exchange Downward Report"/>
            </head>

            <!--   2- Generate report for each execution -->

            <xsl:apply-templates select="//Execution"/>

            <!-- 3- HTML epilog -->

         </body>
      </html>

   </xsl:template>
   <!-- End of 'Session' template -->


   <!-- ================================================ -->
   <!--  Template corresponding to root Execution node   -->
   <!-- ================================================ -->

   <!-- <Execution Id="2" Name="Report" version="0.1"> -->

   <xsl:template match="Execution">

      <!-- 1- Display Execution information -->

      <h1>
         Exchange Execution: <xsl:value-of select="@Name"/> (Version: <xsl:value-of select="@version"/>)
      </h1>

      <!-- 2- Display list of Data source -->

      <xsl:if test="count(./DataSource)!=0">
         <h2>Data source:</h2>
         <ul>
            <xsl:apply-templates select="./DataSource"/>
         </ul>
      </xsl:if>

      <!-- 3- Display Execution general information -->
      <!--   3-1 Display list of Notification -->
      <!--       <Notification Id="40" Name="Server" Sev="Info" msg="ERROR: The exch..."/> -->

      <xsl:if test="count(./Notification)!=0">
         <h2>Notifications:</h2>

         <table border="1">
            <th>
               <tr align="center" bgcolor="000080">
                  <td>
                     <b>
                        <font COLOR="white" FACE="Arial">Severity</font>
                     </b>
                  </td>
                  <td>
                     <b>
                        <font COLOR="white" FACE="Arial">Type</font>
                     </b>
                  </td>
                  <td>
                     <b>
                        <font COLOR="white" FACE="Arial">Message</font>
                     </b>
                  </td>
               </tr>
            </th>
            <xsl:apply-templates select="./Notification"/>
         </table>
      </xsl:if>

      <!--   3-2 Display list of Metric -->
      <!--       <Metric Id="3" Name="FileVersion" value="V0.1" isSet="T" type="string"/> -->

      <xsl:if test="count(.//Metric)!=0 or count(.//Option)!=0 ">
         <h2>Metrics and Options:</h2>

         <table border="0">
            <!--   Display Metrics -->
            <xsl:if test="count(.//Metric)!=0">
               <tr>
                  <td colspan="2" bgcolor="888888">
                     <b>Metric</b>
                  </td>
               </tr>
               <xsl:apply-templates select=".//Metric"/>
            </xsl:if>

            <!--   Display Options except Briefcases list -->
            <xsl:if test="count(.//Option[@Name!='Briefcase'])!=0 ">
               <tr>
                  <td colspan="2" bgcolor="888888">
                     <b>Option</b>
                  </td>
               </tr>
               <xsl:apply-templates select=".//Option[@Name!='Briefcase']"/>
            </xsl:if>
         </table>

         <!--   Display Briefcases list -->
         <xsl:if test="count(.//Option[@Name='Briefcase'])!=0 ">
            <h2>Briefcase:</h2>
            <ul>
               <xsl:apply-templates select=".//Option[@Name='Briefcase']"/>
            </ul>
         </xsl:if>
      </xsl:if>

      <!-- 4- Display list of objects                                                                                                         -->
      <!-- <Set Id="3" Name="ObjectSet">                                                                                                      -->
      <!--   <Object Name="PRODUCT.PLMRepresentationDS" Id="47" Oid="649908280000177850B3107800016003" type="Representation" prop="Publish "> -->
      <!--     <Attribute Id="48" Name="PLM_ExternalID" value="Representation22828" isSet="T" type="string"/>                                 -->
      <!--     <Attribute Id="49" Name="V_Name" value="" isSet="T" type="string"/>                                                            -->
      <!--   </Object>                                                                                                                        -->
      <!-- </Set>                                                                                                                             -->

      <xsl:if test="count(//Object)!=0">
         <h2>Objects:</h2>

         <h3>Statistics:</h3>

         <table border="0">
            <tr>
               <td>
                  <u># of objects:</u>
               </td>
               <td>
                  <xsl:value-of select="count(//Object)"/>
               </td>
            </tr>
            <tr>
               <td>
                  <u># of References:</u>
               </td>
               <td>
                  <xsl:value-of select="count(//Object[@type='Reference'])"/>
               </td>
            </tr>
            <tr>
               <td>
                  <u># of Representations:</u>
               </td>
               <td>
                  <xsl:value-of select="count(//Object[@type='Representation'])"/>
               </td>
            </tr>
            <tr>
               <td>
                  <u># of Instances:</u>
               </td>
               <td>
                  <xsl:value-of select="count(//Object[@type='Instance'])"/>
               </td>
            </tr>
            <tr>
               <td>
                  <u># of Entities:</u>
               </td>
               <td>
                  <xsl:value-of select="count(//Object[@type='Entity'])"/>
               </td>
            </tr>
            <tr>
               <td>
                  <u># of Relations:</u>
               </td>
               <td>
                  <xsl:value-of select="count(//Object[@type='Relation'])"/>
               </td>
            </tr>
            <tr>
               <td>
                  <u># of Port:</u>
               </td>
               <td>
                  <xsl:value-of select="count(//Object[@type='Port'])"/>
               </td>
            </tr>
            <tr>
               <td>
                  <u># of Connection:</u>
               </td>
               <td>
                  <xsl:value-of select="count(//Object[@type='Connection'])"/>
               </td>
            </tr>
            <tr>
               <td>
                  <u># of degraded objects:</u>
               </td>
               <td>
                  <xsl:value-of select="count(//Object[@oper='Downward'])"/>
               </td>
            </tr>
            <tr>
               <td>
                  <u># of filtered object:</u>
               </td>
               <td>
                  <xsl:value-of select="count(//Object[@oper='Downward_Filtered'])"/>
               </td>
            </tr>            
         </table>

         <h3>Object list:</h3>

         <table border="1">
            <th>
               <tr align="center" bgcolor="000080">
                  <td>
                     <b>
                        <font COLOR="white" FACE="Arial">Operation</font>
                     </b>
                  </td>
                  <td>
                     <b>
                        <font COLOR="white" FACE="Arial">Type</font>
                     </b>
                  </td>
                  <td>
                     <b>
                        <font COLOR="white" FACE="Arial">Oid</font>
                     </b>
                  </td>
                  <td>
                     <b>
                        <font COLOR="white" FACE="Arial">Attributes</font>
                     </b>
                  </td>
               </tr>
            </th>
            <xsl:apply-templates select="//Set/Object"/>
         </table>

      </xsl:if>

   </xsl:template>
   <!-- End of 'Execution' template -->

   <!-- ============================================= -->
   <!--  Metric template (as dl list element)         -->
   <!-- ============================================= -->

   <!-- <Metric Id="43" Name="Header_Version" value="1.2" isSet="T" type="string"/> -->

   <xsl:template match="Metric">
      <tr>
         <td>
            <b>
               <xsl:value-of select="@Name"/>
            </b>
         </td>
         <xsl:choose>
            <xsl:when test="@isSet='T'">
               <td>
                  <xsl:choose>
                     <xsl:when test="count(./value)!=0">
                     <ol>
                        <xsl:apply-templates select="./value"/>
                     </ol>
                     </xsl:when>
                     <xsl:otherwise>
                        <xsl:value-of select="@value"/>
                     </xsl:otherwise>
                  </xsl:choose>
               </td>
            </xsl:when>
            <xsl:otherwise>
               <!-- No value set -->
               <td>
                  <i>No value set</i>
               </td>
            </xsl:otherwise>
         </xsl:choose>
      </tr>
   </xsl:template>
   <!-- End of 'Metric' template -->

   <!-- ============================================= -->
   <!--  value template (as list of elements)         -->
   <!-- ============================================= -->

   <!--  <value value="The exchange file requires minor/major functionality to be activated on server.&quot;/&gt;"/> -->

   <xsl:template match="value">
      <li>
         <xsl:value-of select="@value"/>
      </li>
   </xsl:template>
   <!-- End of 'value' template -->

   <!-- ============================================= -->
   <!--  Option template                              -->
   <!-- ============================================= -->

   <!-- <Option Id="10" Name="TransferOption" value="Streams migration mode is VISUALIZATION ONLY." isSet="T" type="string"/> -->

   <xsl:template match="Option">
     <xsl:variable name ="optionNls" select="@nls"/>     
      <tr>
         <td>
            <b>
              <xsl:choose>
                <xsl:when test ="string-length($optionNls) !=0">
                  <xsl:value-of select="$optionNls"/>
                </xsl:when>
                <xsl:otherwise>
                   <xsl:value-of select="@Name"/>
                </xsl:otherwise>
              </xsl:choose>
            
            </b>
         </td>
         <xsl:choose>
            <xsl:when test="@isSet='T'">
               <td>
                  <xsl:choose>
                     <xsl:when test="count(./value)!=0">
                        <ol>
                           <xsl:apply-templates select="./value"/>
                        </ol>
                     </xsl:when>
                     <xsl:otherwise>
                       <xsl:choose>
                         <xsl:when test ="string-length(@local) !=0">
                           <xsl:value-of select="@local"/>
                         </xsl:when>
                         <xsl:otherwise>
                            <xsl:value-of select="@value"/>
                         </xsl:otherwise>
                       </xsl:choose>                                             
                     </xsl:otherwise>
                  </xsl:choose>
               </td>
            </xsl:when>
            <xsl:otherwise>
               <!-- No value set -->
               <td>
                  <i>No value set</i>
               </td>
            </xsl:otherwise>
         </xsl:choose>
      </tr>
   </xsl:template>
   <!-- End of 'Option' template -->
   
   <!-- ============================================= -->
   <!--  Option Compatibility template                    -->
   <!-- ============================================= -->

   <xsl:template match="Option[@Name='Compatibility']">
      <li>
         <xsl:value-of select="@value"/>
      </li>
   </xsl:template>
   <!-- End of 'Option' Compatibility template -->

   <!-- ============================================= -->
   <!--  Option Briefcase template                    -->
   <!-- ============================================= -->

   <!--  <Option Id="7" Name="Briefcase" type="file" isSet="T" value="E:\users\jlm\Temp\ExtractFromPod\ExtractDataFromPod-y15m12d15_h09m09s54-1.3dxml" nls="Briefcase"/> -->

   <xsl:template match="Option[@Name='Briefcase']">
      <li>
         <xsl:value-of select="@value"/>
      </li>
   </xsl:template>
   <!-- End of 'Option' Briefcase template -->

   <!-- ============================================= -->
   <!--  Notification template                        -->
   <!-- ============================================= -->

   <!-- <Notification Id="40" Name="Server" Sev="Info" msg="ERROR: The exch..."/> -->

   <xsl:template match="Notification">
      <!-- Print Attribute Name & Type  -->
      <xsl:choose>
         <xsl:when test="@Sev='Fatal'">
            <tr bgcolor="#FF0000">
               <xsl:call-template name="Notification_Row"/>
            </tr>
         </xsl:when>
         <xsl:when test="@Sev='Error'">
            <tr bgcolor="#FF9900">
               <xsl:call-template name="Notification_Row"/>
            </tr>
         </xsl:when>
         <xsl:when test="@Sev='Warning'">
            <tr bgcolor="#CCFF00">
               <xsl:call-template name="Notification_Row"/>
            </tr>
         </xsl:when>
         <xsl:otherwise>
            <!-- For Trace, Debug & Info -->
            <tr bgcolor="#D0D0D0">
               <xsl:call-template name="Notification_Row"/>
            </tr>
         </xsl:otherwise>
      </xsl:choose>
   </xsl:template>
   <!-- End of 'Notification' template -->

   <!-- ============================================= -->
   <!--  To display Notification row content          -->
   <!-- ============================================= -->

   <xsl:template name="Notification_Row" >
      <td>
         <b>
            <xsl:value-of select="@Sev"/>
         </b>
      </td>
      <td>
         <b>
            <xsl:value-of select="@Name"/>
         </b>
      </td>
      <td>
         <xsl:value-of select="@msg"/>
      </td>
   </xsl:template>
   <!-- End of template named Notification_Row -->

   <!-- ============================================= -->
   <!--  DataSource template                          -->
   <!-- ============================================= -->

   <!-- <DataSource Id="4" Name="4" type="VPM"/> -->

   <xsl:template match="DataSource">
      <li>
         <xsl:value-of select="@type"/>
      </li>
   </xsl:template>
   <!-- End of 'DataSource' template -->

   <!-- ============================================= -->
   <!--  Object template                              -->
   <!-- ============================================= -->

   <!-- <Object Name="PRODUCT.PLMRepresentationDS" Id="49" Oid="F1B2F7B4000019FC4F33C7CA000378DA" type="Representation" prop="Publish "> -->

   <xsl:template match="Object">
      <!-- Display information for root object -->

      <tr>
         <!-- Operations cell -->
         <xsl:call-template name="Object_Operation_Cell"/>

         <!-- Object type -->
         <td align="left">
            <xsl:choose>
               <xsl:when test="@type='Unknown'">
                  <b>
                     <xsl:value-of select="@Name"/>
                  </b>
               </xsl:when>
               <xsl:otherwise>
                  <b>
                     <xsl:value-of select="@type"/> - <xsl:value-of select="@Name"/>
                  </b>
               </xsl:otherwise>
            </xsl:choose>
         </td>

         <!-- Object Id -->
         <td>
            <xsl:value-of select="@Oid"/>

            <xsl:if test="count(./Attribute[@Name='File'])!=0">
               <dl>
                  <dt>
                     <u>
                        <b>Briefcase:</b>
                     </u>
                  </dt>
                  <dd>
                     <xsl:value-of select="./Attribute[@Name='File']/@value"/>
                  </dd>
               </dl>
            </xsl:if>
         </td>

         <td>
            <xsl:choose>
               <xsl:when test="count(./Attribute[string-length(@value)&gt;0])!=0">
                  <sl>
                     <xsl:apply-templates select="./Attribute[@Name!='File']"/>
                  </sl>
               </xsl:when>

               <xsl:otherwise>
                  <!-- Case where no attribute is valuated -->
                  <xsl:value-of select="@oper"/>
               </xsl:otherwise>
            </xsl:choose>
         </td>
      </tr>

      <!-- Optionally Display list of Notification -->

      <xsl:if test="count(./Notification)!=0">
         <xsl:apply-templates select="./Notification"/>
      </xsl:if>

      <!-- Optionally Display list of Mapping -->

      <xsl:if test="count(./Mapping)!=0">
         <xsl:apply-templates select="./Mapping"/>
      </xsl:if>

      <!-- Display sub-objects -->

      <xsl:apply-templates select="./Object"/>
   </xsl:template>
   <!-- End of 'Object' template -->

   <!-- Case of sub objects -->

   <xsl:template match="Object/Object">
      <tr bgcolor="A0A0FF">
         <!-- Operations cell -->
         <xsl:call-template name="Object_Operation_Cell"/>

         <!-- Object type -->
         <td align="right">
            <xsl:choose>
               <xsl:when test="@type='Unknown'">
                  <i>
                     <xsl:value-of select="@Name"/>
                  </i>
               </xsl:when>
               <xsl:otherwise>
                  <i>
                     <xsl:value-of select="@type"/> - <xsl:value-of select="@Name"/>
                  </i>
               </xsl:otherwise>
            </xsl:choose>
         </td>

         <td>
            <xsl:value-of select="@Oid"/>
         </td>

         <td>
            <xsl:choose>
               <xsl:when test="count(./Attribute[string-length(@value)&gt;0])!=0">
                  <sl>
                     <xsl:apply-templates select="./Attribute"/>
                  </sl>
               </xsl:when>

               <xsl:otherwise>
                  <!-- Case where no attribute is valuated -->
                  <xsl:value-of select="@oper"/>
               </xsl:otherwise>
            </xsl:choose>
         </td>
      </tr>

      <!-- Optionally Display list of Notification -->

      <xsl:if test="count(./Notification)!=0">
         <xsl:apply-templates select="./Notification"/>
      </xsl:if>

      <!-- Optionally Display list of Mapping -->

      <xsl:if test="count(./Mapping)!=0">
         <xsl:apply-templates select="./Mapping"/>
      </xsl:if>

   </xsl:template>
   <!-- End for sub 'Object' template -->

   <!-- Case of Mapping information -->
   <!-- <Mapping Id="20" Name="PLMProductDS" Oid="2"> -->

   <xsl:template match="Mapping">
      <tr>
         <td align="right" colspan="2">
            <xsl:choose>
               <xsl:when test="@type='Unknown'">
                  <i>
                     Mapped on <xsl:value-of select="@Name"/>
                  </i>
               </xsl:when>
               <xsl:otherwise>
                  <i>
                     Mapped on <xsl:value-of select="@type"/> <xsl:value-of select="@Name"/>
                  </i>
               </xsl:otherwise>
            </xsl:choose>
         </td>

         <td>
            <xsl:value-of select="@Oid"/>
         </td>

         <td>
            <xsl:choose>
               <xsl:when test="count(./Attribute[string-length(@value)&gt;0])!=0">
                  <sl>
                     <xsl:apply-templates select="./Attribute"/>
                  </sl>
               </xsl:when>

               <xsl:otherwise>
                  <!-- Case where no attribute is valuated -->
                  <xsl:value-of select="@oper"/>
               </xsl:otherwise>
            </xsl:choose>
         </td>
      </tr>
   </xsl:template>
   <!-- End for 'Mapping' template -->

   <!-- Case of Notification on one object -->

   <xsl:template match="Object/Notification">
      <xsl:choose>
         <xsl:when test="@Sev='Fatal'">
            <tr bgcolor="#FF0000">
               <xsl:call-template name="Notification_Object_Row"/>
            </tr>
         </xsl:when>
         <xsl:when test="@Sev='Error'">
            <tr  bgcolor="#FF9900">
               <xsl:call-template name="Notification_Object_Row"/>
            </tr>
         </xsl:when>
         <xsl:when test="@Sev='Warning'">
            <tr bgcolor="#CCFF00">
               <xsl:call-template name="Notification_Object_Row"/>
            </tr>
         </xsl:when>
         <xsl:otherwise>
            <!-- For Trace, Debug & Info -->
            <tr bgcolor="#D0D0D0">
               <xsl:call-template name="Notification_Object_Row"/>
            </tr>
         </xsl:otherwise>
      </xsl:choose>      
   </xsl:template>
   <!-- End of 'Object/Notification' template -->

   <!-- ============================================= -->
   <!--  To display Notification object row content   -->
   <!-- ============================================= -->

   <xsl:template name="Notification_Object_Row" >
      <td colspan="2" align="center">
         <p>
            <b>
               <xsl:value-of select="@Name"/>
            </b>
         </p>

         <xsl:choose>
            <xsl:when test="count(./Attribute)!=0">
               <sl>
                  <xsl:apply-templates select="./Attribute"/>
               </sl>
            </xsl:when>
         </xsl:choose>
      </td>
      <td colspan="2">
         <xsl:value-of select="@msg"/>
      </td>
   </xsl:template>
   <!-- End of template named Notification_Object_Row -->

   <!-- ============================================= -->
   <!--  Attribute template                           -->
   <!-- ============================================= -->

   <!--     <Attribute Id="48" Name="PLM_ExternalID" value="Representation22828" isSet="T" type="string"/>-->

   <xsl:template match="Attribute">
      <xsl:choose>
         <xsl:when test="count(./value)!=0">
            <li>
               <b>
                  <xsl:value-of select="@Name"/>
               </b> :
               <ol>
                  <xsl:apply-templates select="./value"/>
               </ol>
            </li>
         </xsl:when>
         <xsl:otherwise>
            <xsl:if test="string-length(@value)&gt;0">
               <li>
                  <b>
                     <xsl:value-of select="@Name"/>
                  </b> =
                  <xsl:value-of select="@value"/>
               </li>
            </xsl:if>
         </xsl:otherwise>
      </xsl:choose>
   </xsl:template>
   <!-- End of 'Attribute' template -->

   <!-- ============================================= -->
   <!--  Special case of ReportFiles Attribute        -->
   <!-- ============================================= -->

   <!--     <Attribute Id="48" Name="PLM_ExternalID" value="Representation22828" isSet="T" type="string"/>-->

   <xsl:template match="Attribute[@Name='ReportFiles']">
      <xsl:choose>
         <xsl:when test="count(./value)!=0">
            <ol>
               <xsl:apply-templates select="./value"/>
            </ol>
         </xsl:when>
         <xsl:otherwise>
            <xsl:if test="string-length(@value)&gt;0">
               <ol>
                  <li><xsl:value-of select="@value"/></li>
               </ol>
            </xsl:if>
         </xsl:otherwise>
      </xsl:choose>
   </xsl:template>
   <!-- End of Special case of ReportFiles Attribute template -->

   <!-- ================================================= -->
   <!--  Special case of Node Attribute name My_Briefcase -->
   <!-- ================================================= -->

   <!--  <Attribute Id="31" Name="My_Briefcase" type="Node" isSet="T" value="7"/> -->
   <!--  <Option Id="7" Name="Briefcase" type="file" isSet="T" value="E:\users\jlm\Temp\ExtractFromPod\ExtractDataFromPod-y15m12d15_h09m09s54-1.3dxml" nls="Briefcase"/> -->

   <xsl:template match="Attribute[@Name='My_Briefcase']">
      <xsl:choose>
         <xsl:when test="count(./value)!=0">
            <!-- <xsl:variable name="My_briefcase_Id" select="./value" /> -->
            <p><u>Localization:</u></p>
            <ul>
               <xsl:apply-templates select="./value"/>
            </ul>
         </xsl:when>
         <xsl:otherwise>
            <xsl:if test="string-length(@value)&gt;0">
               <xsl:variable name="My_briefcase_Id"   select="./@value" />
               <xsl:variable name="My_briefcase_Path" select="//Option[@Id=$My_briefcase_Id]/@value" />
               <p>
                  <u>Localization:</u> 
                  <xsl:value-of select="$My_briefcase_Path"/>
               </p>
            </xsl:if>
         </xsl:otherwise>
      </xsl:choose>
   </xsl:template>
   <!-- End of case of Node Attribute name My_Briefcase template -->


   <!-- =================================================================== -->
   <!--  Display values in case of attribute, metric or Option multi-values -->
   <!-- =================================================================== -->

   <!--  <value>810</value> -->

   <xsl:template match="value">
      <xsl:if test="string-length(.)&gt;0">
         <xsl:variable name="My_briefcase_Id"   select="." />
         <xsl:variable name="My_briefcase_Path" select="//Option[@Id=$My_briefcase_Id]/@value" />

         <xsl:choose>
            <xsl:when test="string-length($My_briefcase_Path)&gt;0">
               <li>
                  <xsl:value-of select="$My_briefcase_Path"/>
               </li>
            </xsl:when>
            <xsl:otherwise>
               <li>
                  <xsl:value-of select="My_briefcase_Id"/>
               </li>
            </xsl:otherwise>
         </xsl:choose>
      </xsl:if>
   </xsl:template>
   <!-- End of case value template -->

   <!-- ============================================= -->
   <!--  Object operation template   (@oper)          -->
   <!-- ============================================= -->

   <xsl:template name="Object_Operation_Cell" >
      <!-- Display inside one cell operation name -->
      <!--  List of known Synchronize operations: Synchronize_Create, Synchronize_Update, Synchronize_Delete, Synchronize_Ignore & Synchronize_TSO -->
      <!--  List of known Publish operations: Publish, Publish_filtered, Publish_Delegate, Publish_ForUpdate, Publish_Waive & Publish_TSO          -->

         <xsl:choose>
            <xsl:when test="@oper='Downward'">
               <td><b>Degraded</b></td>
            </xsl:when>
            <xsl:when test="@oper='Downward_Filtered'">
               <td><b>Filtered</b></td>
            </xsl:when>           
            <xsl:when test="string-length(@oper)=0">
               <td>.</td>
            </xsl:when>
            <xsl:otherwise>
               <td><xsl:value-of select="@oper"/></td>
            </xsl:otherwise>
         </xsl:choose>

   </xsl:template>
   <!-- End of Object Operation cell creation template -->

</xsl:stylesheet>
