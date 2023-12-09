from datetime import datetime
import pandas as pd
from tabulate import tabulate
def break_habit(habit_name, start_date, cost_per_day, minutes_wasted):
    #personal details
    goal=60
    hourly_wage=51.92 #dkk
    
    #time
    time_elapsed=(datetime.now()-start_date).total_seconds()
    
    #convert timestamp into hours/days
    hours=round(time_elapsed/60/60,2)
    days=round(hours/24,2)

    #money
    money_saved=round(cost_per_day*days,2)
    minutes_saved=round(minutes_wasted*days,2)
    total_money_saved=f'dkk {round(money_saved+(minutes_saved/60*hourly_wage),2)}'
    
    #goal
    days_to_goal=round((goal-days),2)

    #change hours to days
    if hours>72:
        hours=str(days)+' days'
    else:
        hours=str(hours)+' hours'
        
    return {"Habits":habit_name,"Time elapsed":hours,"Money saved":money_saved,"Minutes saved":minutes_saved,"Total money saved":total_money_saved,"Days to goal":days_to_goal}

#loop to calculate habit
while(True):
    
    #input from user
    name=str(input("Enter the name of the habit that you broke: "))
    date_year=int(input("Enter the year of the beginning of the break from the habit: "))
    date_month=int(input("Enter the month of the beginning of the break from the habit: "))
    date_day=int(input("Enter the day of the beginning of the break from the habit: "))
    date_hour=int(input("Enter the hour of the beginning of the break from the habit: "))
    date_minutes=int(input("Enter the minute of the beginning of the break from the habit: "))
    cost=int(input("Enter the cost of the habit per day: "))
    min_wasted=int(input("Enter the minutes wasted on the habit per day: "))

    #calculate the habit
    habits = [
        break_habit(name,datetime(date_year,date_month,date_day,date_hour,date_minutes),cost_per_day=cost,minutes_wasted=min_wasted),
            ]
            
    #display the habit
    data_frame=pd.DataFrame(habits)
    print(tabulate(data_frame,headers='keys',tablefmt='psql'))