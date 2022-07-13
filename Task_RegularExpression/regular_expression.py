#!/usr/bin/env python
# coding: utf-8

# In[35]:


import re 

f = open("regular_expression.txt", "r")
file=f.read()
print(file)


# In[52]:


#List to extract names
name=[]
pattren= re.compile(r'([A-Za-z][a-z]+:?\d?[A-Z][a-z]+)')
matches=pattren.finditer(str(file))
for match in matches:
    name.append(match[0])

for n in name:
    print(n)


# In[54]:


#list to extract numbers
number=[]
pattren=re.compile(r'01\d{9}')
matches=pattren.finditer(str(file))
for match in matches:
    number.append(match[0])
for num in number:
    print(num)


# In[58]:


#list to extract emails
emails=[]
pattren=re.compile(r'[A-Za-z0-9-*_]+@[A-Za-z0-9]+\.\w{2,}')
matches=pattren.finditer(str(file))
for match in matches:
    emails.append(match[0])
for e in emails:
    print(e)


# In[ ]:




