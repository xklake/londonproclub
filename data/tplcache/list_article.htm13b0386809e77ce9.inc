<?php
$z[0]=Array("global","",236,264);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("field","",277,296);
$z[1][4]['name']="title";
$z[2]=Array("global","",297,323);
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",364,393);
$z[3][4]['name']="keywords";
$z[4]=Array("field","",433,491);
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("global","",509,541);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("include","",650,685);
$z[6][4]['filename']="head.htm";
$z[7]=Array("list","\r\n        <li>\r\n         <div class=\"newsleft\">[field:array runphp='yes']@me = (empty(@me['litpic']) ? \"\" : \"<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}'/></a>\"); [/field:array]</div>\r\n         <div class=\"newsright\">\r\n             <p><a href=\"[field:arcurl/]\"><strong>[field:title/]</strong></a></p>\r\n             <p><span class=\"info\"> <small>Date：[field:pubdate function=\"GetDateTimeMK(@me)\"/]</small></span></p>\r\n             <p> [field:description/]... </p>\r\n         </div>\r\n\r\n        <div style=\"width:100%;clear:both;height:0px;color: #ffffff\"></div>\r\n\r\n        </li>\r\n        ",789,1437);
$z[7][4]['pagesize']="10";
$z[8]=Array("pagelist","",1547,1625);
$z[8][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[8][4]['listsize']="5";
$z[9]=Array("include","",1681,1718);
$z[9][4]['filename']="footer.htm";

?>