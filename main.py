import os
import time
from scrapy import cmdline

os.system('sh ./requirements.sh')
if os.path.exists("./.log"):
    os.remove("./.log")
cmdline.execute("scrapy crawl QuestionSetSpider".split())