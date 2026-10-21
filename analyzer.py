def count_by_ip(events, a=3):
    pustoy_slovar = {}
    drugoy_slovar={}
    for i in events:
        if "status" in i:
            if i["status"] == "failed":
                if i["ip"] not in pustoy_slovar:
                    pustoy_slovar[i["ip"]] = 1
                else:
                    pustoy_slovar[i["ip"]] += 1
            elif i["status"] == "success":
                pass
            else:
                print("Invalid event: invalid status")
        else:
            print("Invalid event: missing status")
    for k in pustoy_slovar:
        if pustoy_slovar[k]>=a:
            drugoy_slovar[k]=pustoy_slovar[k]
    return drugoy_slovar
if __name__ == "__main__":
    print("Analyzer started!")