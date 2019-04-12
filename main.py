import os
os.system('sh ./requirements.sh')

import time
start = time.time()

from scrapy import cmdline
if os.path.exists("./.log"):
    os.remove("./.log")
cmdline.execute("scrapy crawl QuestionSetSpider".split())

end = time.time()
print("Total time: " + str(end - start))