import os
import time
from scrapy import cmdline

if os.path.exists("./.log"):
    os.remove("./.log")
os.system("pip3 install scrapy")
os.system("pip3 install numpy")
os.system("pip3 install matplotlib")
cmdline.execute("scrapy crawl QuestionSetSpider".split())