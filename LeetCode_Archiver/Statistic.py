import numpy as np
import matplotlib.pyplot as plt
from matplotlib import cm, font_manager as fm


class Statistic:
    def __init__(self, data_set):
        self.data_set = data_set
        self.TopicFigure()
        self.LanguageFigure()
        self.DifficultyFigure()

    def TopicFigure(self):
        topics = {}
        for data in self.data_set:
            for topic in data["topics"]:
                if topic not in topics:
                    topics[topic] = 1
                else:
                    topics[topic] += 1
        topics = sorted(topics.items(), key=lambda item: item[1], reverse=True)

        # labels, counts, colors
        labels = []
        counts = []
        for label, count in topics:
            if label == 'Dynamic Programming':
                labels.append("DP")
            elif label == "Depth-first Search":
                labels.append("DFS")
            elif label == "Breadth-first Search":
                labels.append("BFS")
            elif label == "Bit Manipulation":
                labels.append("Bit")
            elif label == "Divide and Conquer":
                labels.append("DivideConquer")
            else:
                labels.append(label)
            counts.append(count)
        colors = cm.rainbow(np.arange(len(labels)) / len(labels))

        # plot
        fig, axes = plt.subplots(figsize=(32, 16))
        index = np.arange(len(counts))
        height = counts

        bar = plt.bar(index, height, width=0.4, tick_label=labels, color=colors)
        plt.xticks(index, labels, size='large', rotation=15)
        for rect in bar:
            height = rect.get_height()
            plt.text(rect.get_x() + rect.get_width() / 2.0, 1.01 * height, '%d' % int(height), ha='center', va='bottom')

        plt.xlabel("topics")
        plt.ylabel("numbers")
        plt.title("submissions by topic")

        plt.savefig('LeetCode/TopicFigure.png')
        plt.show()

    def LanguageFigure(self):
        submissions = {}
        for data in self.data_set:
            for submission in data["submission_list"]:
                if submission not in submissions:
                    submissions[submission] = 1
                else:
                    submissions[submission] += 1
        submissions = sorted(submissions.items(), key=lambda item: item[1], reverse=True)

        # labels, counts, colors
        labels = []
        counts = []
        for label, count in submissions:
            labels.append(label)
            counts.append(count)
        colors = cm.rainbow(np.arange(len(labels)) / len(labels))

        # plot
        fig, axes = plt.subplots(figsize=(16, 8))
        index = np.arange(len(counts))
        height = counts

        bar = plt.bar(index, height, width=0.4, tick_label=labels, color=colors)
        plt.xticks(index, labels, size='medium')
        for rect in bar:
            height = rect.get_height()
            plt.text(rect.get_x() + rect.get_width() / 2.0, 1.01 * height, '%d' % int(height), ha='center', va='bottom')

        plt.xlabel("languages")
        plt.ylabel("numbers")
        plt.title("submissions by language")

        plt.savefig('LeetCode/LanguageFigure.png')
        plt.show()

    def DifficultyFigure(self):
        difficulties = {}
        for data in self.data_set:
            difficulty = data["difficulty"]
            if difficulty not in difficulties:
                difficulties[difficulty] = 1
            else:
                difficulties[difficulty] += 1
        difficulties = sorted(difficulties.items(), key=lambda item: item[1], reverse=True)

        # labels, counts, colors
        labels = []
        counts = []
        for label, count in difficulties:
            labels.append(label)
            counts.append(count)
        colors = cm.rainbow(np.arange(len(labels)) / len(labels))

        # plot
        fig, axe = plt.subplots(figsize=(16, 16))

        def make_autopct(values):
            def my_autopct(pct):
                total = sum(values)
                val = int(round(pct * total / 100.0))
                return '{p:.2f}% ({v:d})'.format(p=pct, v=val)

            return my_autopct

        patches, texts, autotexts = axe.pie(counts, labels=labels, colors=colors, autopct=make_autopct(counts),
                                            startangle=90, counterclock=False)

        # font
        proptease = fm.FontProperties()
        proptease.set_size('xx-large')
        plt.setp(autotexts, fontproperties=proptease)
        plt.setp(texts, fontproperties=proptease)

        plt.title("submissions by difficulty")

        plt.savefig('LeetCode/DifficultyFigure.png')
        plt.show()
