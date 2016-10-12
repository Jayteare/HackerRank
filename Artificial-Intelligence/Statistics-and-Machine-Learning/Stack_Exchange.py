import json
import string
import re
import io
import shutil

#Parse the JSON file into a Dictionary.
_data     = [] #Non-Parsed data structure.
_topic    = [] #Non-Parsed populated topic list.
_topics   = [] #Parsed populated topic list.
_question = []
_excerpt  = []
with io.open('training.json', encoding='utf-8', errors='ignore') as _file:
	for line in _file:
		_data.append(json.loads(line))

#Collect the topics,questions, and excerpts available from the JSON file.
for i in range(1,len(_data)):
	_topic.append(_data[i]['topic'])
	_question.append(_data[i]['question'])
	_excerpt.append(_data[i]['excerpt'])

#Parsing of 'topic' and storing them into '_topics'.
_topics = list(set(_topic))

#Analyze a test string
index = -1
for i in range(0,len(_topic)):
    _words_question = re.sub("[^\w]"," ",_question[i]).split()
    _words_excerpt  = re.sub("[^\w]"," ",_excerpt[i]).split()
    for k in range(0,len(_topics)):
        if(_topics[k] == _topic[i]):
            index = k
print _words_question
