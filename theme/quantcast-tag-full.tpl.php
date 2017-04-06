<script type="text/javascript">
<!--//--><![CDATA[//><!--
  var _qevents = _qevents || [];
  (function() {
    var elem = document.createElement('script');
    elem.src = (document.location.protocol == "https:" ? "https://secure" : "http://edge") + ".quantserve.com/quant.js";
    elem.async = true;
    elem.type = "text/javascript";
    var scpt = document.getElementsByTagName('script')[0];
    scpt.parentNode.insertBefore(elem, scpt);
  })();
  _qevents.push(<?php print $vars['quantcast_code_json']; ?>);
//--><!]]>
</script>
<noscript>
  <div style="display:none;"><img src="//pixel.quantserve.com/pixel/<?php print $vars['quantcast_code_url']; ?>" height="1" width="1" alt="Quantcast"/></div>
</noscript>
