<?xml version="1.0"?>
<xsl:stylesheet version="1.0" 
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                xmlns:d="http://www.3ds.com/xsd/CATVidWidgetTreeDump"
                xmlns:e="http://www.3ds.com/xsd/VIDRecord"
                xmlns="http://www.w3.org/1999/xhtml">
  <xsl:output method="xml" doctype-system="about:legacy-compat" encoding="utf-8" indent="no"/>
  <xsl:template match="/">
    <html>
      <head>
        <meta http-equiv="X-UA-Compatible" content="IE=edge"/>
        <title><xsl:value-of select="e:report/e:title"/></title>
        <style type="text/css">
body {
    font-family: Arial, Helvetica, sans-serif;
    font-size: 13px;
    color: black;
    background: white;
    margin: 0px;
}

.pageContent {
	margin: 0px 10px;
}

h1 {
	margin: 5px 0px;
	margin-top: 15px;
	margin-bottom: 8px;
	font-size: 17px;
	font-weight: normal;
}

h2 {
	margin: 0px;
	font-size: 15px;
	font-weight: bold;
}

.message, .treeRoot {
	margin: 0px 30px;	
}

.message {
	padding: 10px;
	border: 1px solid #ddd;
	border-radius: 5px;
	background: #eee;
}

.messagePath {
    margin: 0 15px;
    font-family: monospace;
}

.messagePathElem {
	display: inline-block;
	text-wrap: none;
}

.messagePathErr {
    display: inline-block;
    position: relative;	
}

.messagePathErrUnderline {
    background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAQAAAACCAYAAAB/qH1jAAAABmJLR0QA/wD/AP+gvaeTAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH3QEVEQAOwo/PDAAAAB1pVFh0Q29tbWVudAAAAAAAQ3JlYXRlZCB3aXRoIEdJTVBkLmUHAAAAGElEQVQI12P4z8Dw/z8Dw38GKGCEMWCCAIKwBfzSe+v3AAAAAElFTkSuQmCC) repeat-x;
    width: 100%;
    position: absolute;
    height: 2px;
    bottom: -2px;
    min-width: 1em;    
}

.nodeLink {
	color: blue;
	cursor: pointer;
}

.nodeLink:HOVER {
	text-decoration: underline;
}

.content {
    margin-left: 1em;
}

.className, .leaf-className {
    color: blue;
}

.leaf-className {
	margin-left: 10px;
}

.expandZone {
    cursor: pointer;
}

.expandZone:HOVER .className {
	text-decoration: underline;
}

.attrName {
    color: green;
}

.classId {
	background: #f37e7e;
	color: white;
	border-radius: 5px;
	padding: 0 10px;
	font-size: 11px;
	font-variant: small-caps;
}

.expandPlus, .expandMinus {
	display: inline-block;
    background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAA4AAAAHCAYAAAA4R3wZAAAABmJLR0QA/wD/AP+gvaeTAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH3QEKChIr6XZgwAAAAB1pVFh0Q29tbWVudAAAAAAAQ3JlYXRlZCB3aXRoIEdJTVBkLmUHAAAARElEQVQY02Pcvn37fwZyALLGoqIif2RxXIZu3779PxOa2AZiLWRBsmkDlP2fgYEhAM0VyAYGYHPqf3KdGkCsUxnJDVUAbpAsDMEv7lAAAAAASUVORK5CYII=) no-repeat;
    width: 7px;
    height: 7px;
    margin: 0 3px 1px 0;
}

.expandMinus {
	background-position: -7px 0;
}

.treeRoot {
	white-space: nowrap;
}

.searchBarPlaceHolder {
	padding: 5px 5px 5px 5px;
	visibility: hidden;
}

.searchBar {
	padding: 5px 5px 5px 0;
	white-space: nowrap;
	border-top: 1px solid #ddd;
	background: white;
	position: fixed; 
	bottom: 0px;
	left: 0px;
	right: 0px;
}

.searchBarPlaceHolder, .searchBar {
	display: none;
}

.searchBarClosePick {
	display: inline-block;
	cursor: pointer;
	width: 17px;
	height: 8px;
}

.searchBarClose, .searchBarButtonNextIcon, .searchBarButtonPreviousIcon {
	width: 7px;
	height: 7px;
	margin: 0 5px 1px 5px;		
}

.searchBarButtonNextIcon, .searchBarButtonPreviousIcon {
	display: inline-block;
}

#nextButton, #previousButton {
	margin: 0px 5px 0px 5px;	
	display: inline-block;
}

.searchBarClose {
	background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAcAAAAHCAYAAADEUlfTAAAABmJLR0QA/wD/AP+gvaeTAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH3QEPDg4iRgrd1wAAAB1pVFh0Q29tbWVudAAAAAAAQ3JlYXRlZCB3aXRoIEdJTVBkLmUHAAAAHklEQVQI12NgIASqq6v/4+PDBTAkcOogqJOgndgAAKz1FfGsmcsnAAAAAElFTkSuQmCC) no-repeat;
}

.searchBarButtonNextIcon {
	background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAABmJLR0QA/wD/AP+gvaeTAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH3QEPDiEnJHwRNQAAAB1pVFh0Q29tbWVudAAAAAAAQ3JlYXRlZCB3aXRoIEdJTVBkLmUHAAAASUlEQVQoz8WPwQoAIAxCY7/tp/lxduoyahstSPD0UHSMFwKgKjMPovCxbReOWDoVgJbbHz+LpKrMPIjCx7ZdOGLpVJJabn+81gRqMFoFQcIfvQAAAABJRU5ErkJggg==) no-repeat;
	background-position: -7px 0;
}

.disabledSearchBarButton > .searchBarButtonNextIcon {
	background-position: -7px -7px;	
}

.searchBarButtonPreviousIcon {
	background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAABmJLR0QA/wD/AP+gvaeTAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH3QEPDiEnJHwRNQAAAB1pVFh0Q29tbWVudAAAAAAAQ3JlYXRlZCB3aXRoIEdJTVBkLmUHAAAASUlEQVQoz8WPwQoAIAxCY7/tp/lxduoyahstSPD0UHSMFwKgKjMPovCxbReOWDoVgJbbHz+LpKrMPIjCx7ZdOGLpVJJabn+81gRqMFoFQcIfvQAAAABJRU5ErkJggg==) no-repeat;
}

.disabledSearchBarButton > .searchBarButtonPreviousIcon {
	background-position: 0px -7px;	
}

.searchBarButtonTxt {
	display: inline-block;
}

.searchBarButton {
	color: blue;
	cursor: pointer;
}

.disabledSearchBarButton {
	color: #bbb;
}

.searchBarButton:HOVER {
	text-decoration: underline;
}
        </style>
        <script><xsl:text disable-output-escaping="yes">//&lt;![CDATA[<![CDATA[
var xmlns_d="http://www.3ds.com/xsd/CATVidWidgetTreeDump";
var xmlns_e="http://www.3ds.com/xsd/VIDRecord";
var isIE = /([^\w]|^)MSIE([^\w]|$)/.test(navigator.userAgent);

/**
 * Interpret the relative path of a node.
 *
 * Each element in the path is a class name.
 */
function interpretPath(node, path, throwOnError)
{
    var cursor = node;
    for (var ei = 0; ei < path.length; ++ei) {
        var e = path[ei];

        var newCursor = null;
        for (var childIdx = 0; childIdx < cursor.children.length; ++childIdx) {
            var child = cursor.children[childIdx];
            if (child.className === e) {
                newCursor = child;
                break;
            }
        }
        if (newCursor === null) {
            if (throwOnError || throwOnError === undefined)
                throw Error("Can't find element with class " + e + " while interpeting path: " + path.join("/"));
            else
                return null;
        }
        
        cursor = newCursor;
    }

    return cursor;
}

/**
 * Callback function for mouse click event that will expand the
 * clicked node.
 */
function expandNodeOnMouseClick(event)
{
    var target = typeof event.target !== "undefined" ? event.target : event.srcElement;

    // only do things if an item in the click zone is picked
    for (var expandZone = target; expandZone !== null && expandZone.className != 'expandZone'; expandZone = expandZone.parentNode) {
        /* see the for loop for actual code */
    }
    if (expandZone === null)
        return;

    // find the corresponding node
    for (var node = expandZone; node !== null && node.className != 'node'; node = node.parentNode) {
        /* see the for loop for actual code */
    }
    if (node === null)
        throw Error("Can't find the node of the expandZone");

    // switch the expand state
    var expanded = setExpandState(node) == 1;

    // depending on the state of the ctrl key either do it recursively
    // for children nodes
    if (event.ctrlKey) {
        var children = node.getElementsByTagName("div");
        for (var childi = 0; childi < children.length; ++childi) {
            var child = children[childi];
            if (child.className != 'node')
                continue;
            setExpandState(child, expanded);
        }
    }
}

/**
 * Callback function for mouse click event on an element having d:link
 * attribute that points to a class in the document or to an
 * id. Clicking will expand the corresponding node.
 */
function linkOnMouseClick(event)
{
    var target = typeof event.target !== "undefined" ? event.target : event.srcElement;

    // look for the parent that has "nodeLink" class
    for (var nodeLink = target; nodeLink !== null && nodeLink.className != 'nodeLink'; nodeLink = nodeLink.parentNode) {
        /* see the for loop for actual code */
    }
    if (nodeLink === null)
        return;

    var link = getAttributeNS(nodeLink, xmlns_e, "link");

    if (link.substring(0,1) === ".") {
        var cls = getWidgetsByClassName(link.substring(1));

        for (var cli = 0; cli < cls.length; ++cli) {
            expandBranch(cls[cli]);
        }

        highlightNodes(cls);
    } else {
        var node = document.getElementById(link);
        expandBranch(node);

        highlightNodes([node]);
    }
}

/**
 * Set the expanded/collapsed state of given node. The node is a
 * &lt;div> having the "node" class.
 */
function setExpandState(node, expand) {
    // find the content div
    var content = interpretPath(node, ["content"], false);
    if (content === null) // nodes without content
        return 0;

    // find the expandZone div
    var expandZone = interpretPath(node, ["expandZone"]);

    // find the expand button
    var expandButton = null;
    for (var childIdx = 0; childIdx < expandZone.children.length; ++childIdx) {
        var child = expandZone.children[childIdx];
        if (child.className === "expandMinus" || child.className === "expandPlus") {
            expandButton = child;
            break;
        }
    }
    if (expandButton === null)
        throw Error("Can't find the expand button");

    // interpret the input; if the second argument is missing we
    // simply switch the expand state
    var actuallyExpand = expand !== undefined ? Boolean(expand) : content.style.display === "none";
    var expanded = content.style.display !== "none";

    // only do things if expand state is different
    if (actuallyExpand !== expanded) {
        if (actuallyExpand) {
            expandButton.setAttribute("class", "expandMinus");
            content.style.display = "block";
            return 1;
        } else {
            expandButton.setAttribute("class", "expandPlus");
            content.style.display = "none";
            return -1;
        }
    } else
        return 0;
}

/**
 * Expand all the collapsed node that are parent of the given node
 * (the node is a &lt;div> having the "node" class).
 */
function expandBranch(leafNode)
{
    // the list of expanded nodes
    var expandedNodes = [];

    // iterate throw all the parent nodes (excluding the leaf itself
    // that we want to leave collapsed)
    for (var node = leafNode.parentNode; node !== null; node = node.parentNode) {
        if (node.className != 'node')
            continue;
        if (setExpandState(node, true))
            expandedNodes.push(node);
    }

    return expandedNodes;
}

/**
 * Parse a space separated list of ids. Used to parse the d:class
 * attribute.
 */
function parseClassList(l) 
{ 
    var trimmed = l.replace(/^\s*(.*?)\s*$/,"$1");
    return trimmed.length == 0 ? [] : trimmed.split(/\s+/); 
}

/**
 * Bypass function to overcome IE8 limitation about support of XML
 * namespaces.
 */
function getElementsByTagNameNS(node, namespace, localName)
{
    // IE8 don't implement namespaces aware API and removes the
    // namespaces alias definitions from XSLT output so here we user
    // hard coded aliases when the namespaces aware API is not present
    // IE9 implements namespaces aware API but in Browser Mode IE9 Compat
    // the API exists but the attributes are not in namespaces...
    if (!isIE && node.getElementsByTagNameNS !== undefined)
        return node.getElementsByTagNameNS(namespace, localName);

    if (namespace === xmlns_d)
        return node.getElementsByTagName("d:" + localName);
    else if (namespace == xmlns_e)
        return node.getElementsByTagName("e:" + localName);
    else if (namespace === "http://www.w3.org/1999/xhtml")
        return node.getElementsByTagName(localName);
    else
        throw new Error("Unsupported namespace: " + namespace);
}

/**
 * Bypass function to overcome IE8 limitation about support of XML
 * namespaces.
 */
function getAttributeNS(node, namespace, localName)
{
    // IE8 don't implement namespaces aware API and removes the
    // namespaces alias definitions from XSLT output so here we user
    // hard coded aliases when the namespaces aware API is not present
    // IE9 implements namespaces aware API but in Browser Mode IE9 Compat
    // the API exists but the attributes are not in namespaces...
    if (!isIE && node.getAttributeNS !== undefined)
        return node.getAttributeNS(namespace, localName);

    if (namespace === "")
        return node.getAttribute(localName);
    else if (namespace === xmlns_e)
        return node.getAttribute("e:" + localName);
    else if (namespace === xmlns_d)
        return node.getAttribute("d:" + localName);
    else
        throw new Error("Unsupported namespace: " + namespace);
}

/**
 * Return an array of widget having the given class as specified by
 * d:class attribute.
 */
function getWidgetsByClassName(className, rootElt)
{
    // the returned list
    var ret = [];

    // look in all divs for d:class attribute
    var elt = rootElt === undefined || rootElt === null ? document.documentElement : rootElt;
    var divs = getElementsByTagNameNS(elt, "http://www.w3.org/1999/xhtml", "div");

    for (var divIdx = 0; divIdx < divs.length; ++divIdx) {
        var div = divs[divIdx];

        // get the class attribute
        var clListStr = getAttributeNS(div, xmlns_d,"class");
        if (clListStr === null)
            continue;
        
        // split the class string
        var clList = parseClassList(clListStr);

        // look for given class
        for (var clIdx = 0; clIdx < clList.length; ++clIdx) {
            if (clList[clIdx] === className) {
                ret.push(div);
                break;
            }
        }
    }

    return ret;
}

/** the list of highlighted nodes */
var highlightedNodes = [];
var highlightFocus;
var initialScrollX;
var initialScrollY;

/**
 * Set the highlight to the given nodes.
 *
 * Previously highlighted nodes will be unhighlighted.
 *
 * @param nodes {array} nodes an array of nodes.
 */
function highlightNodes(nodes)
{
    // remove highlight of already highlighted nodes
    for (var ni = 0; ni < highlightedNodes.length; ++ni) {
        var n = highlightedNodes[ni];
        setNodeHighlightColor(n, "");
    }
    highlightedNodes = [];
    highlightFocus = undefined;

    // add highlights
    for (var ni = 0; ni < nodes.length; ++ni) {
        var n = nodes[ni];
        setNodeHighlightColor(n, "yellow");
        highlightedNodes.push(n);
    }

    // memorize the scroll at start of the search
    if (nodes.length !== 0) {
        initialScrollX = document.documentElement.scrollLeft;
        initialScrollY = document.documentElement.scrollTop;
    } else {
        // restore scroll at end of search
        animateScrollTo(initialScrollX, initialScrollY);
    }
    

    // display or hide the search bar
    setSearchBar(nodes.length !== 0);

    if (nodes.length !== 0) {
        // focus on first highlighted result
        setHighlightFocus(0);

        // update availability of next and previous buttons
        updateNextPreviousButtons();
    }
}

/**
 * Set the highlight color of the given node.
 */
function setNodeHighlightColor(n, color)
{
    var cn = interpretPath(n, ["expandZone", "className"], false);
    if (cn === null)
        cn = interpretPath(n, ["leaf-className"])
    cn.style.background = color;
    var nhl = interpretPath(n, ["nodeHeadLine"]);
    if (nhl !== null)
        nhl.style.background = color;
}

/**
 * Expand the given highlighted node; scroll to it.
 */
function setHighlightFocus(idx) {
    // reset specific highlight color
    if (highlightFocus !== undefined)
        setNodeHighlightColor(highlightedNodes[highlightFocus], "yellow");

    highlightFocus = idx;
    var n = highlightedNodes[idx];
    var cn = interpretPath(n, ["expandZone", "className"], false);
    if (cn === null)
        cn = interpretPath(n, ["leaf-className"])

    // expand the branch showing the node
    expandBranch(n);

    // set specific highlight color
    setNodeHighlightColor(n, "#cbf37e");

    // scroll to center the node name
    scrollToCenter(cn);

    // update availability of next and previous buttons
    updateNextPreviousButtons();

    // update match index
    var body = document.getElementsByTagName("body")[0];
    var sb = interpretPath(body, ["searchBar"]);
    interpretPath(sb, ["matchId"]).innerHTML = "" + (idx + 1);

}


/**
 * Show or hide the search bar.
 */
var setSearchBar = function () {
    var animationDuration = 150;
    var lastInterval;
    var lastStart;
    var sbHeight;
    var sb;
    var sbph;
    function animationCB() {
        var offset = new Date() - lastStart;
        var ended = offset >= animationDuration;
        if (ended)
            clearInterval(lastInterval);
        var px = ended ? 0 : - Math.round(sbHeight * (animationDuration - offset) / animationDuration);
        sb.style.bottom = "" + px + "px";
    }
    return function(visible) {
        // reset previous animation
        if (lastInterval !== undefined) {
            clearInterval(lastInterval);
            lastInterval = undefined;
        }
        var body = document.getElementsByTagName("body")[0];
        sb = interpretPath(body, ["searchBar"]);
        sbph = interpretPath(body, ["searchBarPlaceHolder"]);
        if (visible) {
            interpretPath(sb, ["matchId"]).innerHTML = "1";
            interpretPath(sb, ["matchCount"]).innerHTML = "" + highlightedNodes.length;
            sb.style.display = "block";
            sbph.style.display = "block";
            sbHeight = sb.offsetHeight;
            sb.style.bottom = "" + (-sbHeight) + "px";
            lastStart = new Date();
            lastInterval = setInterval(animationCB, 25);
        } else {
            sb.style.display = "";
            sbph.style.display = "";
        }
    }
}();

/**
 * Callback for previous search button.
 */
function previousSearch() {
    if (highlightFocus > 0)
        setHighlightFocus(highlightFocus - 1);
}

/**
 * Callback for next search button.
 */
function nextSearch() {
    if (highlightFocus < highlightedNodes.length - 1)
        setHighlightFocus(highlightFocus + 1);
}

/**
 * Update availability of next and previous search buttons.
 */
function updateNextPreviousButtons() {
    if (highlightFocus < highlightedNodes.length - 1)
        document.getElementById("nextButton").setAttribute("class", "searchBarButton");
    else
        document.getElementById("nextButton").setAttribute("class", "disabledSearchBarButton");
    if (highlightFocus > 0)
        document.getElementById("previousButton").setAttribute("class", "searchBarButton");
    else
        document.getElementById("previousButton").setAttribute("class", "disabledSearchBarButton");
}

/**
 * Scroll given element to center of the screen.
 */
function scrollToCenter(element) {
    var winW = document.documentElement.clientWidth;
    var winH = document.documentElement.clientHeight;
    var elW = element.offsetWidth;
    var elH = element.offsetHeight;
    var elCenterX = element.offsetLeft + elW / 2;
    var elCenterY = element.offsetTop + elH / 2;
    var scrollPositionX = elCenterX - winW / 2;
    var scrollPositionY = elCenterY - winH / 2;
    animateScrollTo(scrollPositionX, scrollPositionY);
}

/**
 * Scroll given element to center of the screen.
 */
var animateScrollTo = function() {
    var animationDuration = 100;
    var lastInterval;
    var lastStart;
    var targetScrollX;
    var targetScrollY;
    var startScrollX;
    var startScrollY;
    function animationCB() {
        var offset = new Date() - lastStart;
        var ended = offset >= animationDuration;
        if (ended)
            clearInterval(lastInterval);
        var scrollX = ended ? targetScrollX : Math.round(startScrollX + (targetScrollX - startScrollX) * offset / animationDuration);
        var scrollY = ended ? targetScrollY : Math.round(startScrollY + (targetScrollY - startScrollY) * offset / animationDuration);
        window.scrollTo(scrollX, scrollY);
    }
    return function(x,y) {
        lastStart = new Date();
        startScrollX = document.documentElement.scrollLeft;
        startScrollY = document.documentElement.scrollTop;
        targetScrollX = x;
        targetScrollY = y;
        lastInterval = setInterval(animationCB, 20);
    }
}();
        ]]>//]]&gt;</xsl:text>
        </script>
      </head>
      <body>
        <div class="pageContent">
          <h1>Message</h1>
          <div class="message">
            <h2><xsl:value-of select="e:report/e:title"/></h2>
            <xsl:apply-templates select="e:report/e:message/*|e:report/e:message/text()" mode="error"/>
          </div>
          <h1>Widgets</h1>
          <div class="treeRoot" onclick="expandNodeOnMouseClick(event)">
            <xsl:apply-templates select="e:report/viddump/*" mode="widgets-hierarchy"/>
          </div>
        </div>
        <div class="searchBarPlaceHolder">&#160;</div>
        <div class="searchBar">
          <div class="searchBarClosePick" onclick="highlightNodes([])"><div class="searchBarClose"></div></div>Match <span class="matchId">1</span> of <span class="matchCount">4</span> matches.
          <div onclick="nextSearch()" id="nextButton" class="searchBarButton"><div class="searchBarButtonNextIcon"></div><div class="searchBarButtonTxt">Next</div></div>
          <div onclick="previousSearch()" id="previousButton" class="searchBarButton"><div class="searchBarButtonPreviousIcon"></div><div class="searchBarButtonTxt">Previous</div></div>
        </div>
      </body>
    </html>
  </xsl:template>

  <!-- element with no children -->
  <xsl:template match="*" priority="1" mode="widgets-hierarchy">
    <div class="node"><xsl:call-template name="add-classes"/><span class="leaf-className"><xsl:value-of select="name(.)"/></span><xsl:call-template name="element-attributes"/></div>
  </xsl:template>

  <!-- element with children -->
  <xsl:template match="*[*]" priority="2" mode="widgets-hierarchy">
    <div class="node"><xsl:call-template name="add-classes"/><span class="expandZone"><div class="expandPlus"></div><span class="className"><xsl:value-of select="name(.)"/></span></span><xsl:call-template name="element-attributes"/>
    <div class="content" style="display:none;">
      <xsl:apply-templates mode="widgets-hierarchy"/>
    </div>
    </div>
  </xsl:template>

  <!-- output the start tag of an element -->
  <xsl:template name="element-attributes">
    <xsl:if test="@*">
      <span class="nodeHeadLine"><xsl:for-each select="@*">
        <xsl:text> </xsl:text>
        <xsl:choose>
          <xsl:when test="namespace-uri()!='http://www.3ds.com/xsd/CATVidWidgetTreeDump' or local-name()!='class'">
            <span class="attrName"><xsl:value-of select="name(.)"/></span>="<xsl:value-of select="."/><xsl:text>"</xsl:text>
          </xsl:when>
          <xsl:otherwise>
            <span class="classId"><xsl:value-of select="."/></span>
          </xsl:otherwise>
        </xsl:choose>
      </xsl:for-each></span>
    </xsl:if>
  </xsl:template>

  <!-- add the class attribute of namespace d to the html node -->
  <xsl:template name="add-classes">
    <xsl:if test="@d:class">
      <xsl:attribute name="d:class"><xsl:value-of select="@d:class"/></xsl:attribute>
    </xsl:if>
  </xsl:template>

  <!-- template rule for link in error -->
  <xsl:template match="e:link" mode="error" priority="2">
    <span class="nodeLink" onclick="linkOnMouseClick(event)"><xsl:attribute name="e:link"><xsl:value-of select="@ref"/></xsl:attribute><xsl:apply-templates select="node()" mode="error"/></span>
  </xsl:template>

  <!-- template rule for path in error -->
  <xsl:template match="e:path" mode="error" priority="2">
    <div class="messagePath">
      <xsl:for-each select="e:pathToken">
        <div class="messagePathElem">
          <xsl:apply-templates mode="error"/>
        </div>
      </xsl:for-each>
    </div>
  </xsl:template>

  <!-- template rule for error underline in path -->
  <xsl:template match="e:pathErr" mode="error" priority="2">
    <div class="messagePathErr">
      <div class="messagePathErrUnderline"></div>
      <xsl:apply-templates mode="error"/>
    </div>
  </xsl:template>

  <!-- template rule other elements in error; we copy them -->
  <xsl:template match="@* | *" mode="error" priority="1">
    <xsl:copy>
      <xsl:apply-templates select="@* | node()" mode="error"/>
    </xsl:copy>
  </xsl:template>

</xsl:stylesheet>
