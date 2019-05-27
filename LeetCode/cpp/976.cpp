<html>
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
  <link rel="stylesheet" href="/maintenance/styles/50x.css"/>
</head>
<body>
  <div class="container">
    <div class="display-503 row col-md-8 col-md-offset-2">
      <div class="col-md-6">
        <img class="face-image" src="/maintenance/images/503.png" width="250px" alt="Error 429" />
      </div>
      <div class="col-md-6 msg">
        <h2><strong>Error 429 - Rate limit exceeded!</strong></h2>
        <p>Sorry but you are sending requests too fast. Please try again later.</p>
        <br>
        <a class="btn btn-default" data-toggle="modal" data-target="#supportModal"><i class="fa fa-envelope-o" aria-hidden="true"></i>&nbsp;  Contact Us</a>
      </div>
    </div>
  </div> <!-- /container -->
  <footer class="site-footer">
    <div class="container">
      <hr>
      <div class="row">
        <div class="col-sm-5 copyright">
          <span>Copyright © 2018 LeetCode</span>
        </div>
        <div class="text-right col-sm-7 contact">
          <a data-toggle="modal" data-target="#supportModal">Contact Us</a>
        </div>
      </div>
      <div class="row"><p></p></div>
    </div>
   </div>
  </footer>
</body>


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

</