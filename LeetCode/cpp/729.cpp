

<html>
  <head>
    <meta charset="utf-8"><script type="text/javascript">(window.NREUM||(NREUM={})).loader_config={xpid:"UAQDVFVRGwEAXVlbBAg="};window.NREUM||(NREUM={}),__nr_require=function(t,n,e){function r(e){if(!n[e]){var o=n[e]={exports:{}};t[e][0].call(o.exports,function(n){var o=t[e][1][n];return r(o||n)},o,o.exports)}return n[e].exports}if("function"==typeof __nr_require)return __nr_require;for(var o=0;o<e.length;o++)r(e[o]);return r}({1:[function(t,n,e){function r(t){try{s.console&&console.log(t)}catch(n){}}var o,i=t("ee"),a=t(18),s={};try{o=localStorage.getItem("__nr_flags").split(","),console&&"function"==typeof console.log&&(s.console=!0,o.indexOf("dev")!==-1&&(s.dev=!0),o.indexOf("nr_dev")!==-1&&(s.nrDev=!0))}catch(c){}s.nrDev&&i.on("internal-error",function(t){r(t.stack)}),s.dev&&i.on("fn-err",function(t,n,e){r(e.stack)}),s.dev&&(r("NR AGENT IN DEVELOPMENT MODE"),r("flags: "+a(s,function(t,n){return t}).join(", ")))},{}],2:[function(t,n,e){function r(t,n,e,r,s){try{p?p-=1:o(s||new UncaughtException(t,n,e),!0)}catch(f){try{i("ierr",[f,c.now(),!0])}catch(d){}}return"function"==typeof u&&u.apply(this,a(arguments))}function UncaughtException(t,n,e){this.message=t||"Uncaught error with no additional information",this.sourceURL=n,this.line=e}function o(t,n){var e=n?null:c.now();i("err",[t,e])}var i=t("handle"),a=t(19),s=t("ee"),c=t("loader"),f=t("gos"),u=window.onerror,d=!1,l="nr@seenError",p=0;c.features.err=!0,t(1),window.onerror=r;try{throw new Error}catch(h){"stack"in h&&(t(8),t(7),"addEventListener"in window&&t(5),c.xhrWrappable&&t(9),d=!0)}s.on("fn-start",function(t,n,e){d&&(p+=1)}),s.on("fn-err",function(t,n,e){d&&!e[l]&&(f(e,l,function(){return!0}),this.thrown=!0,o(e))}),s.on("fn-end",function(){d&&!this.thrown&&p>0&&(p-=1)}),s.on("internal-error",function(t){i("ierr",[t,c.now(),!0])})},{}],3:[function(t,n,e){t("loader").features.ins=!0},{}],4:[function(t,n,e){function r(t){}if(window.performance&&window.performance.timing&&window.performance.getEntriesByType){var o=t("ee"),i=t("handle"),a=t(8),s=t(7),c="learResourceTimings",f="addEventListener",u="resourcetimingbufferfull",d="bstResource",l="resource",p="-start",h="-end",m="fn"+p,w="fn"+h,v="bstTimer",y="pushState",g=t("loader");g.features.stn=!0,t(6);var x=NREUM.o.EV;o.on(m,function(t,n){var e=t[0];e instanceof x&&(this.bstStart=g.now())}),o.on(w,function(t,n){var e=t[0];e instanceof x&&i("bst",[e,n,this.bstStart,g.now()])}),a.on(m,function(t,n,e){this.bstStart=g.now(),this.bstType=e}),a.on(w,function(t,n){i(v,[n,this.bstStart,g.now(),this.bstType])}),s.on(m,function(){this.bstStart=g.now()}),s.on(w,function(t,n){i(v,[n,this.bstStart,g.now(),"requestAnimationFrame"])}),o.on(y+p,function(t){this.time=g.now(),this.startPath=location.pathname+location.hash}),o.on(y+h,function(t){i("bstHist",[location.pathname+location.hash,this.startPath,this.time])}),f in window.performance&&(window.performance["c"+c]?window.performance[f](u,function(t){i(d,[window.performance.getEntriesByType(l)]),window.performance["c"+c]()},!1):window.performance[f]("webkit"+u,function(t){i(d,[window.performance.getEntriesByType(l)]),window.performance["webkitC"+c]()},!1)),document[f]("scroll",r,{passive:!0}),document[f]("keypress",r,!1),document[f]("click",r,!1)}},{}],5:[function(t,n,e){function r(t){for(var n=t;n&&!n.hasOwnProperty(u);)n=Object.getPrototypeOf(n);n&&o(n)}function o(t){s.inPlace(t,[u,d],"-",i)}function i(t,n){return t[1]}var a=t("ee").get("events"),s=t(21)(a,!0),c=t("gos"),f=XMLHttpRequest,u="addEventListener",d="removeEventListener";n.exports=a,"getPrototypeOf"in Object?(r(document),r(window),r(f.prototype)):f.prototype.hasOwnProperty(u)&&(o(window),o(f.prototype)),a.on(u+"-start",function(t,n){var e=t[1],r=c(e,"nr@wrapped",function(){function t(){if("function"==typeof e.handleEvent)return e.handleEvent.apply(e,arguments)}var n={object:t,"function":e}[typeof e];return n?s(n,"fn-",null,n.name||"anonymous"):e});this.wrapped=t[1]=r}),a.on(d+"-start",function(t){t[1]=this.wrapped||t[1]})},{}],6:[function(t,n,e){var r=t("ee").get("history"),o=t(21)(r);n.exports=r,o.inPlace(window.history,["pushState","replaceState"],"-")},{}],7:[function(t,n,e){var r=t("ee").get("raf"),o=t(21)(r),i="equestAnimationFrame";n.exports=r,o.inPlace(window,["r"+i,"mozR"+i,"webkitR"+i,"msR"+i],"raf-"),r.on("raf-start",function(t){t[0]=o(t[0],"fn-")})},{}],8:[function(t,n,e){function r(t,n,e){t[0]=a(t[0],"fn-",null,e)}function o(t,n,e){this.method=e,this.timerDuration=isNaN(t[1])?0:+t[1],t[0]=a(t[0],"fn-",this,e)}var i=t("ee").get("timer"),a=t(21)(i),s="setTimeout",c="setInterval",f="clearTimeout",u="-start",d="-";n.exports=i,a.inPlace(window,[s,"setImmediate"],s+d),a.inPlace(window,[c],c+d),a.inPlace(window,[f,"clearImmediate"],f+d),i.on(c+u,r),i.on(s+u,o)},{}],9:[function(t,n,e){function r(t,n){d.inPlace(n,["onreadystatechange"],"fn-",s)}function o(){var t=this,n=u.context(t);t.readyState>3&&!n.resolved&&(n.resolved=!0,u.emit("xhr-resolved",[],t)),d.inPlace(t,y,"fn-",s)}function i(t){g.push(t),h&&(b?b.then(a):w?w(a):(E=-E,R.data=E))}function a(){for(var t=0;t<g.length;t++)r([],g[t]);g.length&&(g=[])}function s(t,n){return n}function c(t,n){for(var e in t)n[e]=t[e];return n}t(5);var f=t("ee"),u=f.get("xhr"),d=t(21)(u),l=NREUM.o,p=l.XHR,h=l.MO,m=l.PR,w=l.SI,v="readystatechange",y=["onload","onerror","onabort","onloadstart","onloadend","onprogress","ontimeout"],g=[];n.exports=u;var x=window.XMLHttpRequest=function(t){var n=new p(t);try{u.emit("new-xhr",[n],n),n.addEventListener(v,o,!1)}catch(e){try{u.emit("internal-error",[e])}catch(r){}}return n};if(c(p,x),x.prototype=p.prototype,d.inPlace(x.prototype,["open","send"],"-xhr-",s),u.on("send-xhr-start",function(t,n){r(t,n),i(n)}),u.on("open-xhr-start",r),h){var b=m&&m.resolve();if(!w&&!m){var E=1,R=document.createTextNode(E);new h(a).observe(R,{characterData:!0})}}else f.on("fn-end",function(t){t[0]&&t[0].type===v||a()})},{}],10:[function(t,n,e){function r(){var t=window.NREUM,n=t.info.accountID||null,e=t.info.agentID||null,r=t.info.trustKey||null,i="btoa"in window&&"function"==typeof window.btoa;if(!n||!e||!i)return null;var a={v:[0,1],d:{ty:"Browser",ac:n,ap:e,id:o.generateCatId(),tr:o.generateCatId(),ti:Date.now()}};return r&&n!==r&&(a.d.tk=r),btoa(JSON.stringify(a))}var o=t(16);n.exports={generateTraceHeader:r}},{}],11:[function(t,n,e){function r(t){var n=this.params,e=this.metrics;if(!this.ended){this.ended=!0;for(var r=0;r<p;r++)t.removeEventListener(l[r],this.listener,!1);n.aborted||(e.duration=s.now()-this.startTime,this.loadCaptureCalled||4!==t.readyState?null==n.status&&(n.status=0):a(this,t),e.cbTime=this.cbTime,d.emit("xhr-done",[t],t),c("xhr",[n,e,this.startTime]))}}function o(t,n){var e=t.responseType;if("json"===e&&null!==n)return n;var r="arraybuffer"===e||"blob"===e||"json"===e?t.response:t.responseText;return w(r)}function i(t,n){var e=f(n),r=t.params;r.host=e.hostname+":"+e.port,r.pathname=e.pathname,t.sameOrigin=e.sameOrigin}function a(t,n){t.params.status=n.status;var e=o(n,t.lastSize);if(e&&(t.metrics.rxSize=e),t.sameOrigin){var r=n.getResponseHeader("X-NewRelic-App-Data");r&&(t.params.cat=r.split(", ").pop())}t.loadCaptureCalled=!0}var s=t("loader");if(s.xhrWrappable){var c=t("handle"),f=t(12),u=t(10).generateTraceHeader,d=t("ee"),l=["load","error","abort","timeout"],p=l.length,h=t("id"),m=t(15),w=t(14),v=window.XMLHttpRequest;s.features.xhr=!0,t(9),d.on("new-xhr",function(t){var n=this;n.totalCbs=0,n.called=0,n.cbTime=0,n.end=r,n.ended=!1,n.xhrGuids={},n.lastSize=null,n.loadCaptureCalled=!1,t.addEventListener("load",function(e){a(n,t)},!1),m&&(m>34||m<10)||window.opera||t.addEventListener("progress",function(t){n.lastSize=t.loaded},!1)}),d.on("open-xhr-start",function(t){this.params={method:t[0]},i(this,t[1]),this.metrics={}}),d.on("open-xhr-end",function(t,n){"loader_config"in NREUM&&"xpid"in NREUM.loader_config&&this.sameOrigin&&n.setRequestHeader("X-NewRelic-ID",NREUM.loader_config.xpid);var e=!1;if("init"in NREUM&&"distributed_tracing"in NREUM.init&&(e=!!NREUM.init.distributed_tracing.enabled),e&&this.sameOrigin){var r=u();r&&n.setRequestHeader("newrelic",r)}}),d.on("send-xhr-start",function(t,n){var e=this.metrics,r=t[0],o=this;if(e&&r){var i=w(r);i&&(e.txSize=i)}this.startTime=s.now(),this.listener=function(t){try{"abort"!==t.type||o.loadCaptureCalled||(o.params.aborted=!0),("load"!==t.type||o.called===o.totalCbs&&(o.onloadCalled||"function"!=typeof n.onload))&&o.end(n)}catch(e){try{d.emit("internal-error",[e])}catch(r){}}};for(var a=0;a<p;a++)n.addEventListener(l[a],this.listener,!1)}),d.on("xhr-cb-time",function(t,n,e){this.cbTime+=t,n?this.onloadCalled=!0:this.called+=1,this.called!==this.totalCbs||!this.onloadCalled&&"function"==typeof e.onload||this.end(e)}),d.on("xhr-load-added",function(t,n){var e=""+h(t)+!!n;this.xhrGuids&&!this.xhrGuids[e]&&(this.xhrGuids[e]=!0,this.totalCbs+=1)}),d.on("xhr-load-removed",function(t,n){var e=""+h(t)+!!n;this.xhrGuids&&this.xhrGuids[e]&&(delete this.xhrGuids[e],this.totalCbs-=1)}),d.on("addEventListener-end",function(t,n){n instanceof v&&"load"===t[0]&&d.emit("xhr-load-added",[t[1],t[2]],n)}),d.on("removeEventListener-end",function(t,n){n instanceof v&&"load"===t[0]&&d.emit("xhr-load-removed",[t[1],t[2]],n)}),d.on("fn-start",function(t,n,e){n instanceof v&&("onload"===e&&(this.onload=!0),("load"===(t[0]&&t[0].type)||this.onload)&&(this.xhrCbStart=s.now()))}),d.on("fn-end",function(t,n){this.xhrCbStart&&d.emit("xhr-cb-time",[s.now()-this.xhrCbStart,this.onload,n],n)})}},{}],12:[function(t,n,e){n.exports=function(t){var n=document.createElement("a"),e=window.location,r={};n.href=t,r.port=n.port;var o=n.href.split("://");!r.port&&o[1]&&(r.port=o[1].split("/")[0].split("@").pop().split(":")[1]),r.port&&"0"!==r.port||(r.port="https"===o[0]?"443":"80"),r.hostname=n.hostname||e.hostname,r.pathname=n.pathname,r.protocol=o[0],"/"!==r.pathname.charAt(0)&&(r.pathname="/"+r.pathname);var i=!n.protocol||":"===n.protocol||n.protocol===e.protocol,a=n.hostname===document.domain&&n.port===e.port;return r.sameOrigin=i&&(!n.hostname||a),r}},{}],13:[function(t,n,e){function r(){}function o(t,n,e){return function(){return i(t,[f.now()].concat(s(arguments)),n?null:this,e),n?void 0:this}}var i=t("handle"),a=t(18),s=t(19),c=t("ee").get("tracer"),f=t("loader"),u=NREUM;"undefined"==typeof window.newrelic&&(newrelic=u);var d=["setPageViewName","setCustomAttribute","setErrorHandler","finished","addToTrace","inlineHit","addRelease"],l="api-",p=l+"ixn-";a(d,function(t,n){u[n]=o(l+n,!0,"api")}),u.addPageAction=o(l+"addPageAction",!0),u.setCurrentRouteName=o(l+"routeName",!0),n.exports=newrelic,u.interaction=function(){return(new r).get()};var h=r.prototype={createTracer:function(t,n){var e={},r=this,o="function"==typeof n;return i(p+"tracer",[f.now(),t,e],r),function(){if(c.emit((o?"":"no-")+"fn-start",[f.now(),r,o],e),o)try{return n.apply(this,arguments)}catch(t){throw c.emit("fn-err",[arguments,this,t],e),t}finally{c.emit("fn-end",[f.now()],e)}}}};a("actionText,setName,setAttribute,save,ignore,onEnd,getContext,end,get".split(","),function(t,n){h[n]=o(p+n)}),newrelic.noticeError=function(t,n){"string"==typeof t&&(t=new Error(t)),i("err",[t,f.now(),!1,n])}},{}],14:[function(t,n,e){n.exports=function(t){if("string"==typeof t&&t.length)return t.length;if("object"==typeof t){if("undefined"!=typeof ArrayBuffer&&t instanceof ArrayBuffer&&t.byteLength)return t.byteLength;if("undefined"!=typeof Blob&&t instanceof Blob&&t.size)return t.size;if(!("undefined"!=typeof FormData&&t instanceof FormData))try{return JSON.stringify(t).length}catch(n){return}}}},{}],15:[function(t,n,e){var r=0,o=navigator.userAgent.match(/Firefox[\/\s](\d+\.\d+)/);o&&(r=+o[1]),n.exports=r},{}],16:[function(t,n,e){function r(){function t(){return n?15&n[e++]:16*Math.random()|0}var n=null,e=0,r=window.crypto||window.msCrypto;r&&r.getRandomValues&&(n=r.getRandomValues(new Uint8Array(31)));for(var o,i="xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx",a="",s=0;s<i.length;s++)o=i[s],"x"===o?a+=t().toString(16):"y"===o?(o=3&t()|8,a+=o.toString(16)):a+=o;return a}function o(){function t(){return n?15&n[e++]:16*Math.random()|0}var n=null,e=0,r=window.crypto||window.msCrypto;r&&r.getRandomValues&&Uint8Array&&(n=r.getRandomValues(new Uint8Array(31)));for(var o=[],i=0;i<16;i++)o.push(t().toString(16));return o.join("")}n.exports={generateUuid:r,generateCatId:o}},{}],17:[function(t,n,e){function r(t,n){if(!o)return!1;if(t!==o)return!1;if(!n)return!0;if(!i)return!1;for(var e=i.split("."),r=n.split("."),a=0;a<r.length;a++)if(r[a]!==e[a])return!1;return!0}var o=null,i=null,a=/Version\/(\S+)\s+Safari/;if(navigator.userAgent){var s=navigator.userAgent,c=s.match(a);c&&s.indexOf("Chrome")===-1&&s.indexOf("Chromium")===-1&&(o="Safari",i=c[1])}n.exports={agent:o,version:i,match:r}},{}],18:[function(t,n,e){function r(t,n){var e=[],r="",i=0;for(r in t)o.call(t,r)&&(e[i]=n(r,t[r]),i+=1);return e}var o=Object.prototype.hasOwnProperty;n.exports=r},{}],19:[function(t,n,e){function r(t,n,e){n||(n=0),"undefined"==typeof e&&(e=t?t.length:0);for(var r=-1,o=e-n||0,i=Array(o<0?0:o);++r<o;)i[r]=t[n+r];return i}n.exports=r},{}],20:[function(t,n,e){n.exports={exists:"undefined"!=typeof window.performance&&window.performance.timing&&"undefined"!=typeof window.performance.timing.navigationStart}},{}],21:[function(t,n,e){function r(t){return!(t&&t instanceof Function&&t.apply&&!t[a])}var o=t("ee"),i=t(19),a="nr@original",s=Object.prototype.hasOwnProperty,c=!1;n.exports=function(t,n){function e(t,n,e,o){function nrWrapper(){var r,a,s,c;try{a=this,r=i(arguments),s="function"==typeof e?e(r,a):e||{}}catch(f){l([f,"",[r,a,o],s])}u(n+"start",[r,a,o],s);try{return c=t.apply(a,r)}catch(d){throw u(n+"err",[r,a,d],s),d}finally{u(n+"end",[r,a,c],s)}}return r(t)?t:(n||(n=""),nrWrapper[a]=t,d(t,nrWrapper),nrWrapper)}function f(t,n,o,i){o||(o="");var a,s,c,f="-"===o.charAt(0);for(c=0;c<n.length;c++)s=n[c],a=t[s],r(a)||(t[s]=e(a,f?s+o:o,i,s))}function u(e,r,o){if(!c||n){var i=c;c=!0;try{t.emit(e,r,o,n)}catch(a){l([a,e,r,o])}c=i}}function d(t,n){if(Object.defineProperty&&Object.keys)try{var e=Object.keys(t);return e.forEach(function(e){Object.defineProperty(n,e,{get:function(){return t[e]},set:function(n){return t[e]=n,n}})}),n}catch(r){l([r])}for(var o in t)s.call(t,o)&&(n[o]=t[o]);return n}function l(n){try{t.emit("internal-error",n)}catch(e){}}return t||(t=o),e.inPlace=f,e.flag=a,e}},{}],ee:[function(t,n,e){function r(){}function o(t){function n(t){return t&&t instanceof r?t:t?c(t,s,i):i()}function e(e,r,o,i){if(!l.aborted||i){t&&t(e,r,o);for(var a=n(o),s=m(e),c=s.length,f=0;f<c;f++)s[f].apply(a,r);var d=u[g[e]];return d&&d.push([x,e,r,a]),a}}function p(t,n){y[t]=m(t).concat(n)}function h(t,n){var e=y[t];if(e)for(var r=0;r<e.length;r++)e[r]===n&&e.splice(r,1)}function m(t){return y[t]||[]}function w(t){return d[t]=d[t]||o(e)}function v(t,n){f(t,function(t,e){n=n||"feature",g[e]=n,n in u||(u[n]=[])})}var y={},g={},x={on:p,addEventListener:p,removeEventListener:h,emit:e,get:w,listeners:m,context:n,buffer:v,abort:a,aborted:!1};return x}function i(){return new r}function a(){(u.api||u.feature)&&(l.aborted=!0,u=l.backlog={})}var s="nr@context",c=t("gos"),f=t(18),u={},d={},l=n.exports=o();l.backlog=u},{}],gos:[function(t,n,e){function r(t,n,e){if(o.call(t,n))return t[n];var r=e();if(Object.defineProperty&&Object.keys)try{return Object.defineProperty(t,n,{value:r,writable:!0,enumerable:!1}),r}catch(i){}return t[n]=r,r}var o=Object.prototype.hasOwnProperty;n.exports=r},{}],handle:[function(t,n,e){function r(t,n,e,r){o.buffer([t],r),o.emit(t,n,e)}var o=t("ee").get("handle");n.exports=r,r.ee=o},{}],id:[function(t,n,e){function r(t){var n=typeof t;return!t||"object"!==n&&"function"!==n?-1:t===window?0:a(t,i,function(){return o++})}var o=1,i="nr@id",a=t("gos");n.exports=r},{}],loader:[function(t,n,e){function r(){if(!E++){var t=b.info=NREUM.info,n=p.getElementsByTagName("script")[0];if(setTimeout(u.abort,3e4),!(t&&t.licenseKey&&t.applicationID&&n))return u.abort();f(g,function(n,e){t[n]||(t[n]=e)}),c("mark",["onload",a()+b.offset],null,"api");var e=p.createElement("script");e.src="https://"+t.agent,n.parentNode.insertBefore(e,n)}}function o(){"complete"===p.readyState&&i()}function i(){c("mark",["domContent",a()+b.offset],null,"api")}function a(){return R.exists&&performance.now?Math.round(performance.now()):(s=Math.max((new Date).getTime(),s))-b.offset}var s=(new Date).getTime(),c=t("handle"),f=t(18),u=t("ee"),d=t(17),l=window,p=l.document,h="addEventListener",m="attachEvent",w=l.XMLHttpRequest,v=w&&w.prototype;NREUM.o={ST:setTimeout,SI:l.setImmediate,CT:clearTimeout,XHR:w,REQ:l.Request,EV:l.Event,PR:l.Promise,MO:l.MutationObserver};var y=""+location,g={beacon:"bam.nr-data.net",errorBeacon:"bam.nr-data.net",agent:"js-agent.newrelic.com/nr-1123.min.js"},x=w&&v&&v[h]&&!/CriOS/.test(navigator.userAgent),b=n.exports={offset:s,now:a,origin:y,features:{},xhrWrappable:x,userAgent:d};t(13),p[h]?(p[h]("DOMContentLoaded",i,!1),l[h]("load",r,!1)):(p[m]("onreadystatechange",o),l[m]("onload",r)),c("mark",["firstbyte",s],null,"api");var E=0,R=t(20)},{}]},{},["loader",2,11,4,3]);</script><script type="text/javascript">window.NREUM||(NREUM={});NREUM.info={"beacon":"bam.nr-data.net","errorBeacon":"bam.nr-data.net","licenseKey":"8d5fb92f6e","applicationID":"2098939","transactionName":"ZwMAYEdSCktRWxZRXV5JJEFbUBBRX1ZNXFhRCAVbG0UNXUdLTFxXVgcXWEFAXkhRXwdnXF8SPVJaRgpc","queueTime":0,"applicationTime":56,"agent":""}</script>
    <title>Page Not Found - LeetCode</title>
    <meta property="og:title" content="Page Not Found - LeetCode" />

    
    <meta content='width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no, viewport-fit=cover' name='viewport' />
    
    <meta name="description" content="Level up your coding skills and quickly land a job. This is the best place to expand your knowledge and get prepared for your next interview." />
    
    <meta property="og:image" content="/static/images/LeetCode_Sharing.png" />
    <meta property="og:description" content="Level up your coding skills and quickly land a job. This is the best place to expand your knowledge and get prepared for your next interview." />

    

    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-57x57.png" />
    <link rel="apple-touch-icon" sizes="60x60" href="/apple-touch-icon-60x60.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-72x72.png" />
    <link rel="apple-touch-icon" sizes="76x76" href="/apple-touch-icon-76x76.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114x114.png" />
    <link rel="apple-touch-icon" sizes="120x120" href="/apple-touch-icon-120x120.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144x144.png" />
    <link rel="apple-touch-icon" sizes="152x152" href="/apple-touch-icon-152x152.png" />
    <link rel="apple-touch-icon" sizes="180x180" href="/apple-touch-icon-180x180.png" />
    <link rel="icon" type="image/png" href="/favicon-16x16.png" sizes="16x16" />
    <link rel="icon" type="image/png" href="/favicon-32x32.png" sizes="32x32" />
    <link rel="icon" type="image/png" href="/favicon-96x96.png" sizes="96x96" />
    <link rel="icon" type="image/png" href="/favicon-160x160.png" sizes="160x160" />
    <link rel="icon" type="image/png" href="/favicon-192x192.png" sizes="192x192" />
    <meta name="application-name" content="LeetCode"/>
    <meta name="msapplication-TileColor" content="#da532c" />
    <meta name="msapplication-TileImage" content="/mstile-144x144.png" />

    

    <script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o)
  ,m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a
  ,m)})(window,document,'script','//www.google-analytics.com/analytics.js','ga'
  );
  ga('create', 'UA-6849839-6', 'leetcode.com');
  ga('require', 'displayfeatures');
  ga('send', 'pageview');
</script>

    <link href="/static/bootstrap/dist/css/bootstrap.min.css?v=3.3.7" rel="stylesheet">
    <link href="/static/font-awesome/css/font-awesome.min.css?cache_version=2" rel="stylesheet">
    <link href="/static/bootstrap-table/dist/bootstrap-table.min.css" rel="stylesheet" />

     


    <link rel="stylesheet" href="/static/CACHE/css/7e23d49b217f.css" type="text/css" />

    

    
    
  <link rel="stylesheet" href="/static/CACHE/css/56fb78573a7e.css" type="text/css" />

<link rel="stylesheet" href="/static/CACHE/css/b95fc7f785ea.css" type="text/css" />


    <script type="text/javascript" src="/static/CACHE/js/552cba795668.js"></script>
    <script src="/static/jquery/dist/jquery.min.js?v=3.3.1"></script>
    <script src="/static/jquery.cookie/jquery.cookie.js"></script>
    <script src="/static/jquery-sticky/jquery.sticky.js"></script>
    <script src="/static/clipboard/dist/clipboard.min.js"></script>
    <script src="/static/sweetalert2/dist/sweetalert2.min.js"></script>
    <script>
      $(document).ready(function(){
        $('.sticky').sticky({topSpacing:0});
      });

      
      
      
      window.LeetCodeData = {
        features: {
          questionTranslation: false,
          subscription: true,
          signUp: true,
          chinaProblemDiscuss: false,
          enableSharedWorker: false,
          enableChannels: true,
          enableDangerZone: true,
          enableCnJobs: false,
          enableDiscussHot:  true ,
        },
        regionInfo: "US",
        userStatus: {
          isSignedIn: true,
          optedIn:  true ,
          isPremium: false,
          isAdmin:  false ,
          isStaff:  false ,
          isTranslator:  false ,
          isSuperuser:  false ,
          request_region: 'US',
          region: '',
          permissions: [],
          
            realName: 'Zhengyu Chen',
            username: 'ZintrulCre',
            userSlug: 'zintrulcre',
            avatar: 'https://assets.leetcode.com/users/zintrulcre/avatar_1529070465.png',
            numUnreadNotifications: 0,
            lastModified: 1561191932,
          
          
        },
        chinaURL: "https://leetcode-cn.com",
        websocketUrl: "wss://sockets.leetcode.com/ws/",
        navbar: {
          
            loginSocial: [{"id": "linkedin", "login_url": "/accounts/linkedin/login/"}, {"id": "google", "login_url": "/accounts/google/login/"}, {"id": "github", "login_url": "/accounts/github/login/"}, {"id": "facebook", "login_url": "/accounts/facebook/login/"}],
          
          loginNext: undefined,
          subscription: true,
          mi: true,
          miNext: true,
          contest: true,
          discuss: true,
          store: true,
          book: true,
          translate: false,
          identity:  "" ,
        },
      };
    </script>
    <script src="/static/angular/angular.min.js"></script>
    <script src="/static/jquery-ui-dist/jquery-ui.min.js"></script>
    <script src="/static/noty/lib/noty.min.js"></script>
    <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
    <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
    <!--[if lt IE 9]>
      <script src="/static/html5shiv/dist/html5shiv.min.js"></script>
      <script src="/static/respond.js/dest/respond.min.js"></script>
    <![endif]-->

    
  <script>
    $(document).ready(function() {
      var time_diff = new Date() - new Date(localStorage.getItem('region_switcher_last_close_ts'))
      if (time_diff > 86400000) {  // 86400000ms == 1day
        $("#region_switcher").removeClass('hide');
      }
    });

    function openNavList() {
      var menu = $('#nav-menu-btn');
      var navbar = $('.navbar-collapse');
      if(!navbar.hasClass('collapsing')) {
        if(navbar.hasClass('in')) {
          menu.removeClass('open');
        } else {
          menu.addClass('open');
        }
      }
    };

    function closeRegion() {
      $("#region_switcher").addClass('hide');
      localStorage.setItem('region_switcher_last_close_ts', new Date());
    }
  </script>

  </head>
  <body>
    <script src="/static/bootstrap/dist/js/bootstrap.min.js?v=3.3.7"></script>
    <script src="/static/bootstrap-table/dist/bootstrap-table.min.js"></script>
    <script type="text/javascript" src="/static/CACHE/js/2fa54da6e16d.js"></script>

    <script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/runtime.aebc1ca4f.js" ></script>
    <script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/common/global.e6867971d.js" ></script>
    <script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/common/styles/index.15e5c5dae.js" ></script>
    <script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/vendor-libs.b09271371.js" ></script>
    <script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/common-libs.0bdd3660b.js" ></script>
    <script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/new-libs.33ae7b9ca.js" ></script>

    
    
    
  <div class="content-wrapper">

     
       
     

    

    <div id="lc_navbar" class="navbar navbar-inverse navbar-extra"></div>
    <div id="lc_navbar_placeholder"></div>
    <div id="base_content">
       
<div class="container">
  <div class="display-404 row col-md-8 col-md-offset-2">
    <div class="col-md-6">
      <img class="face-image" src="/static/images/404_face.png" width="250px" alt="404 not found" />
    </div>

    <div class="col-md-6 msg">
      
        <h2><strong>Page Not Found</strong></h2>
        <p>Sorry, but we can't find the page you are looking for...</p>
        <br>
        <a class="btn btn-default" href="https://leetcode.com/"><i class="fa fa-home" aria-hidden="true"></i> &nbsp;Back to Home</a>
      
    </div>
  </div>
</div> <!-- /container -->
<script>
  window.LEETCODE_PAGE_NOT_FOUND = true;
</script>

    </div>

  </div>

  
  <footer class="site-footer" id="lc-footer">
    <div class="container">
      <hr>
      <div class="row">
        
        <div class="col-sm-4 copyright">
          <span>Copyright © 2019 LeetCode</span>
        </div>
        
        <div class="text-right col-sm-8 region-us">
          <div class="links">
            <a href="/support/">Help Center</a>
            &nbsp;|&nbsp;
            
              <span class="hidden-xs hidden-sm" id="Join_LeetCode">
                <a href="/jobs/">Jobs</a>
                &nbsp;|&nbsp;
              </span>
            
            
            <span class="hidden-xs hidden-sm" id="Join_LeetCode">
              <a href="/bugbounty/">Bug Bounty</a>
              &nbsp;|&nbsp;
            </span>
            
            
            <a href="/terms/">Terms</a>
            &nbsp;|&nbsp;
            <a href="/privacy/">Privacy<span class="hide-too-small">  Policy</span></a>
            
              <span class="region-base">
                
                  <span class="hidden-xs space">&nbsp; &nbsp; </span>
                  <br class="visible-xs newline"/>
                  <a href="/region/" class="choose-region us">
                    <img src="/static/images/region/us.svg" height="14"/>
                    <span class="hidden-md">United States</span>
                  </a>
                
              </span>
            
          </div>
        </div>
      </div>
      
    </div>
  </footer>

  <div class="modal fade simple-modal" id="supportModal" role="dialog">
    <div class="modal-center">
      <div class="modal-dialog">
        <div class="modal-content">
          <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-hidden="true">&times;</button>
            <span class="text-lg text-300">&nbsp;How can we help you?</span>
          </div>

          <div class="modal-body">
            <div class="row text-center">
              <div class="col-sm-4">
                <a
                  class="support-module btn btn-default"
                  href="mailto:billing@leetcode.com?subject=Billing%20Issue&body=Name:%0D%0A%0D%0AUsername:%0D%0A%0D%0AMessage:%0D%0A%0D%0A"
                  target="_blank"
                >
                  <i class="fa fa-credit-card text-xl" aria-hidden="true"></i>
                  <br/><span class="text">Billing &amp; Account</span>
                </a>
              </div>
              <div class="col-sm-4">
                <a
                  class="support-module btn btn-default"
                  href="mailto:support@leetcode.com?subject=General%20Support&body=Name:%0D%0A%0D%0AUsername:%0D%0A%0D%0AMessage:%0D%0A%0D%0A"
                  target="_blank"
                >
                  <i class="fa fa-life-ring text-xl" aria-hidden="true"></i>
                  <br/><span class="text">General Support</span>
                </a>
              </div>
              <div class="col-sm-4">
                <a
                  class="support-module btn btn-default"
                  href="mailto:feedback@leetcode.com?subject=Other%20Inquiries&body=Name:%0D%0A%0D%0AUsername:%0D%0A%0D%0AMessage:%0D%0A%0D%0A"
                  target="_blank"
                >
                  <i class="fa fa-question-circle text-xl" aria-hidden="true"></i>
                  <br/><span class="text">Other Inquiries</span>
                </a>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
  

  <script type="text/javascript" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/apps/navigation/index.10e7f7a7e.js" ></script>
  <script type="text/javascript" src="/static/CACHE/js/eb02df0bc0e3.js"></script>

  <script>
    (function($, w, d){
      
      

      $(function() {
        $('#navbar-right img').addClass('img-rounded');
        setFooterStyles();
      });

      function setFooterStyles() {
        var $footer = $('#lc-footer'),
            height = $footer.outerHeight();
        if (!$footer.parent().is('body')) return ;
        $footer.css('margin-top', -height);
        $('.content-wrapper').css('padding-bottom', height);
      }

    }(jQuery, window, document));
    try {
      ace.config.set("basePath", "/static/ace-builds/src-noconflict/")
    } catch(err) {}
  </script>


    <script>
      (function($, w, d){

        $('#exit-mock-user-btn').click(function() {
          $.ajax({
            type: 'POST',
            url: "/api/exit_mock_user/",
            data: $('#exit-mock-user-form').serialize(),
            success: function() {
              window.location = window.location.href.split("?")[0];
            }
          });
        });
      }(jQuery, window, document));
    </script>
    
    
    
      <script type="text/javascript">
    var URL = 'https://leetcode.com/discuss/interview-experience/';
    var CONTENT = '🔗 Interviewing? Discuss here! 💬';

    function getHashCode(str) {
        var hash = 0, i, chr;
        if (str.length === 0) return hash;
        for (i = 0; i < str.length; i++) {
            chr = str.charCodeAt(i);
            hash = ((hash << 5) - hash) + chr;
            hash |= 0;
        }
        return hash;
    }

    var LOCAL_STORAGE_KEY = 'feedback-tab:' + getHashCode(URL + CONTENT);
    var CLOSE_BUTTON_CLICKED = false;

    var CLOSE_BUTTON_HTML = '\
        <?xml version="1.0" encoding="UTF-8"?>\
        <svg id="close-icon-svg" width="24px" height="24px" viewBox="0 0 24 24" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink">\
            <title>icon/close</title>\
            <defs></defs>\
            <g id="close-icon" stroke="none" stroke-width="1" fill="none" fill-rule="evenodd">\
                <polygon id="path-1" points="19 6.41 17.59 5 12 10.59 6.41 5 5 6.41 10.59 12 5 17.59 6.41 19 12 13.41 17.59 19 19 17.59 13.41 12"></polygon>\
            </g>\
        </svg>\
    ';

    function onClickClose(e) {
        e.preventDefault();
        document.querySelector('.feedback-anchor').classList.add('feedback-anchor-closing');
        window.localStorage.setItem(LOCAL_STORAGE_KEY, Date.now());
        CLOSE_BUTTON_CLICKED = true;
    }

    function onTransitionEnd(event) {
        if (event.target && CLOSE_BUTTON_CLICKED && event.propertyName === 'opacity') {
            event.target.remove();
        }
    }

    function createFeedbackTab() {
        var closeButton = document.createElement('span');
        closeButton.classList.add('feedback-tab-close-button');
        closeButton.innerHTML = CLOSE_BUTTON_HTML;
        closeButton.addEventListener('click', onClickClose);

        var feedbackTabContent = document.createElement('span');
        feedbackTabContent.innerHTML = CONTENT;

        var feedbackTab = document.createElement('div');
        feedbackTab.classList.add('feedback-tab');

        feedbackTab.appendChild(feedbackTabContent);
        feedbackTab.appendChild(closeButton);

        var feedbackAnchor = document.createElement('a');
        feedbackAnchor.classList.add('feedback-anchor');
        feedbackAnchor.setAttribute('href', URL);
        feedbackAnchor.setAttribute('target', '_blank');
        feedbackAnchor.appendChild(feedbackTab);
        feedbackAnchor.addEventListener('transitionend', onTransitionEnd);
        return feedbackAnchor;
    }

    function insertFeedbackTab() {
        var feedbackTab = createFeedbackTab();
        var navbarRightContainer = document.getElementById('navbar-right-container');
        if (navbarRightContainer) {
            navbarRightContainer.insertBefore(feedbackTab, navbarRightContainer.firstChild);
        }
    }

    window.onload = function() {
        if (!window.localStorage.getItem(LOCAL_STORAGE_KEY)) {
            setTimeout(insertFeedbackTab, 500);
        }
    }
</script>
<style>
    .feedback-tab {
        position: absolute;
        display: flex;
        align-items: center;
        top: 0px;
        right: 270px;
        background-color: #455a64;
        color: white;
        opacity: 0.6;
        border-radius: 0 0 3px 3px;
        padding: 5px 10px;
        cursor: pointer;
        z-index: 2;
        transition: all 0.3s ease-in-out;
    }
    .feedback-tab:hover {
        opacity: 1;
    }
    .feedback-tab-close-button {
        margin-left: 5px;
        height: 1em;
        width: 1em;
        display: inline-flex;
        align-items: center;
        justify-content: center;
    }
    .feedback-anchor:focus {
        text-decoration: none;
    }
    .feedback-anchor-closing {
        opacity: 0;
        transition: opacity 0.3s ease-in-out;
    }
    aside#region_switcher {
        position: initial;
    }
    #close-icon-svg {
        opacity: 0.5;
        transition: all 0.3s ease-in-out;
    }
    #close-icon-svg:hover {
        opacity: 1;
    }
    #close-icon {
        fill: white;
    }
</style>

<script>
if (document.querySelector("aside#region_switcher") != null) {
  var cnInsertLocal = document.getElementsByTagName('script')[0];
  var cnScript = document.createElement('script');
  cnScript.src = 'https://assets.leetcode-cn.com/lccn-resources/cn.js';
  cnInsertLocal.parentNode.insertBefore(cnScript, cnInsertLocal);
}
</script>
    

    
  </body>
</