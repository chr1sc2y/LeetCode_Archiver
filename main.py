import os
import time

start = time.time()

os.system('sh ./requirements.sh')
if os.path.exists("./.log"):
    os.remove("./.log")

from scrapy import cmdline
cmdline.execute("scrapy crawl QuestionSetSpider".split())

end = time.time()
print("Total time: " + str(end - start))