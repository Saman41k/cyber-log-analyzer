'''events = [
    {"ip": "192.168.1.10", "status": "failed"},
    {"ip": "192.168.1.20", "status": "success"},
    {"ip": "192.168.1.10", "status": "failed"},
    {"ip": "192.168.1.30", "status": "failed"},
    {"ip": "192.168.1.10", "status": "success"},
    {"ip": "192.168.1.40", "status": "failed"},
    {"ip": "192.168.1.40", "status": "failed"},
]

failed_counts = {}
for i in events:
    if i["status"] == "failed":
        if i["ip"] not in failed_counts:
            failed_counts[i["ip"]] = 1
        else:
            failed_counts[i["ip"]]+=1
a = sorted(failed_counts,key=lambda x: failed_counts[x],  reverse=True)
for i in a:
    if failed_counts[i]>=2:
        print(f"{i} -- {failed_counts[i]} -- failed attempts")


def check_login(event):
    
    if event["status"]=="failed":
        return f"Suspicious login from {event['ip']}"
    else:
        return f"Normal login from {event['ip']}"

event = [
    {"ip": "192.168.1.10", "status": "failed"},
    {"ip": "192.168.1.20", "status": "success"},
    {"ip": "192.168.1.30", "status": "failed"},
    {"ip": "192.168.1.10", "status": "failed"},
]

for i in event:
    print(check_login(i))

def is_suspicious(event):
    
    if event["status"]=="failed":
        return True
    return False
    
event = [
    {"ip": "10.0.0.1", "status": "failed"},
    {"ip": "10.0.0.2", "status": "success"},
    {"ip": "10.0.0.3", "status": "failed"},
]
for i in event:
    if is_suspicious(i):
        print(f"Suspicious login from {i['ip']}")


def find_jimmy(events):
    if events["status"]=="failed":
        return True
        
        


events = [
    {"ip": "10.0.0.1", "status": "failed"},
    {"ip": "10.0.0.2", "status": "success"},
    {"ip": "10.0.0.1", "status": "failed"},
    {"ip": "10.0.0.3", "status": "failed"},
    {"ip": "10.0.0.1", "status": "failed"},
    {"ip": "10.0.0.3", "status": "failed"},
    {"ip": "10.0.0.3", "status": "failed"},
    {"ip": "10.0.0.1", "status": "failed"},
    {"ip": "10.0.0.1", "status": "failed"},
]

failed_counts = {}
for i in events:
    if find_jimmy(i):
        if i["ip"] not in failed_counts:
            failed_counts[i["ip"]] = 1
        else:
           failed_counts[i["ip"]] += 1
for k in failed_counts:    
    if failed_counts[k] >=3:
        print(f"{failed_counts[k]} failed attempts from {k} ")
'''


'''with open("login_logs.txt", "r") as file:
    failed_counts = {}
    malades = {}
    
    for i in file:
        if "failed" in i:
            parts = i.split()
            
            if parts[0] not in failed_counts:
                failed_counts[parts[0]] = 1
            else:
                failed_counts[parts[0]] +=1
    
        if "success" in i:
            part = i.split()
            if part[0] not in malades:
                malades[part[0]] = 1
            else:
                malades[part[0]] +=1
    all_ips = set(failed_counts) | set(malades)
    for i in all_ips:
        if i in malades:
            a = malades[i]
        else:
            a = 0
        if failed_counts.get(i, 0) >=0:
            print(f"{i} failed {failed_counts.get(i, 0)}, success  {a}")'''


# def count_failed(events):
#     counter = 0
#     for i in events:
#         if i["status"] == "failed":
#             counter+=1
#     return counter
# events = [
#     {"ip": "10.0.0.1", "status": "failed"},
#     {"ip": "10.0.0.2", "status": "success"},
#     {"ip": "10.0.0.3", "status": "failed"},
#     {"ip": "10.0.0.4", "status": "success"}
# ]

# print(count_failed(events))

# try:
#     number = int(input())
#     print(f"Good {number}")
# except ValueError:
#     print(f"Invalid input")


import json

# def count_failed(events):
#     counter = 0
#     for i in events:
#         if "status" in i:
#             if i["status"] == "failed":
#                 counter+=1
#             elif i["status"] == "success":
#                 pass
#             else:
#                 print("Invalid event: invalid status")
#         else:
#             print("Invalid event: missing status")
#     return counter


from analyzer import count_by_ip
try:
    with open("events.json", "r") as file:
        # json.dump(events, file)
        events = json.load(file)
        if isinstance(events, list):
            print("Valid data")
            print(count_by_ip(events))
        else:
            print("Invalid data")
        
except json.JSONDecodeError:
    print("Invalid JSON")