class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        dict = {}
        for i in range(len(list1)):
            dict[list1[i]] = i
        restaurant = []
        sum = sys.maxsize
        for i in range(len(list2)):
            if list2[i] in dict:
                if dict[list2[i]] + i < sum:
                    restaurant.clear()
                    restaurant.append(list2[i])
                    sum = dict[list2[i]] + i
                elif dict[list2[i]] + i == sum:
                    restaurant.append(list2[i])
        return restaurant
