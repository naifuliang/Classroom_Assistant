# API Document
## Login/Register:  
### Client:
```json
{
"act":"login",
"username":"LNF_297",
"password":"123",
"type":"student"
}
```
### Server:
```json
{
    "act": "login",
    "is_successful": true
}
//登陆时用户名或密码错误返回false，注册时用户名重名返回false
```
## Get class list for both student and teacher  
### Client  
```json
{
"act":"getclass"
}
```
### Server   
```json
[
    {
        "classid": 1,
        "classname": "C++",
        "teacher": "LNF_297"
    },
    {
        "classid": 2,
        "classname": "C--",
        "teacher": "LNF_297"
    },
    {
        "classid": 3,
        "classname": "高等数学",
        "teacher": "LNF_297"
    }
]
```
## Create a new class(Only used by teacher)    
### Client    
```json
{
"act":"addclass",
"classname":"C++"
}
```
### Server   
```json
{
"act":"addclass",
"is_successful":true
}
```
## Take a exitant class by Classid(Only used by student)    
### Client    
```json
{
"act":"attendclass",
"classid":1
}
```
### Server     
```json
{
    "act": "attend",
    "is_successful": false
}
```
## Create a new paper    
### Client    
```json
{
"act":"addpaper",
"classid":1,
"papername":"C++ quiz",
"papercontent":"[]"
}
```
### Server    
```json
{
"act":"addpaper",
"is_successful":true
}
```

## Get a paper list in a certain class for both teacher and student    
### Client
```json
{
"act":"showpaperlist",
"classid":1
}
```
### Server    
```json
[
    {
        "paperid": 1,
        "papername": "C++ quiz"
    },
    {
        "paperid": 2,
        "papername": "C++ quiz2"
    },
    {
        "paperid": 3,
        "papername": "C++ quiz3"
    }
]

```
## Request a full paper for both student and teacher   
### Client    
```json
{
"act":"getpaper",
"paperid":1
}
```
### Server   
```json
{
    "papercontent": "[]",
    "paperid": 1,
    "papername": "C++ quiz"
}
```
## Paper submission for student(the client can only submit the score)     
### Client    
```json
{
"act":"submit",
"paperid":1,
"score":100
}
```
### Server
```json
{
"act":"submission",
"is_successful":true
}
//重复提交返回false
```
## Get Score    
### Client    
```json
{
    "act":"getscore",
    "paperid":1
}
```
### Server    
if teacher
```json
[
    {
        "score": 100,
        "student": "LNF_297"
    }
]

```
if student
```json
{
"act":"getscore",
"score":100
}
```