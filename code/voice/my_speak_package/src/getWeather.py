import requests

def getweather()
    r = requests.get('http://www.weather.com.cn/data/cityinfo/101020100.html')
    r.encoding = 'utf-8'
    return r.json()['weatherinfo']["temp1"],r.json()['weatherinfo']["temp2"]