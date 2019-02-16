import os
import time
from scrapy import cmdline

os.system("pip3 install scrapy")
start = time.process_time()
cmdline.execute("scrapy crawl QuestionSetSpider".split())
end = time.process_time()