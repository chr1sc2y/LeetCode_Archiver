import time
from scrapy import cmdline

start = time.process_time()
cmdline.execute("scrapy crawl QuestionSetSpider".split())
end = time.process_time()
print("Total time: " + str(end - start))
