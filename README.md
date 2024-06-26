![HyTech Logo](https://hytechracing.gatech.edu/images/hytech_logo.png)

# Mechanical

Simulations, scripts, and analysis tools used to model the performance of the 2021/2022 vehicle.

This simulation model was originally created for ME 4013, Hybrid Vehicle Powertrains.  
It was modified by Brandon Strecker and Christian Free for a Formula Hybrid concept (final project) and then simplified to Hytech.
It has since been modified by Matt Weist of HyTech to more accurately fit HyTech's model. 
Basic HyTech parameters have been added but may not be entirely accurate.  The model is relatively self-explanatory in the signal flow.

## Getting Started with this Git Repository
1. Create a GitHub account if you don't already have one.
2. Follow HyTech's [Software Guide](https://github.com/hytech-racing/training/tree/master/Resources).
3. Download and install [GitHub Desktop](https://desktop.github.com/) (basic) or [Git CLI](https://git-scm.com/book/en/v2/Getting-Started-Installing-Git) (advanced).
    * If you are using GitHub Desktop for the first time, be sure to read the [User Guide](https://help.github.com/desktop/guides/).
    * If you are using Git for the first time, you should start off by reading a tutorial. There are many available online:
        * [Git Tutorial](https://git-scm.com/docs/gittutorial)
        * [Atlassian Git Tutorial](https://www.atlassian.com/git/tutorials/)
    * You may want to keep a copy of [GitHub's Git Cheat Sheet](https://services.github.com/kit/downloads/github-git-cheat-sheet.pdf) as a reference.
4. Talk to your subteam lead to be added to the team within the GitHub organization.
5. Clone this repository to your computer using the URLs:
    * SSH: `git@github.com:hytech-racing/mechanical.git`
    * HTTPS: `https://github.com/hytech-racing/mechanical.git`

## Repository File System

TOP LEVEL:
HyTech_Simulink.slx ---------- This is the model file based on HyTech's control scheme.  Open and go to the main page to see a To-Do list.
HyTech_Simulink_Original.slx - This is the model file based on Brandon and Christian's control scheme.  Open and go to the main page to see a To-Do list.
Vehicle_Init_File_L3.m ------- This is a used to modify common parameters and load data.
Vehicle_Post_File.m ---------- This is a used to post-process data. Currently, it only displays distance and delta SOC in a dialog box.
ME 4013 Tutorial.pptx -------- This outlines step-by-step the tutorial that was used to build this model.  Lots of important details here.

"Component_Data" FOLDER:  Toggle selection of these files in the init file.
Battery_Data.mat ------------- This is data for the battery.  
Battery_Data_old.mat --------- This is data for an abritrary battery, provided by Brandon and Christian.
188\MG_Data_Continuous.mat --- This is data for the Emrax 188 motor, with continuous torque limits.
188\MG_Data_Peak.mat --------- This is data for the Emrax 188 motor, with peak torque limits.
208\MG_Data_Continuous.mat --- This is data for the Emrax 208 motor, with continuous torque limits.
208\MG_Data_Peak.mat --------- This is data for the Emrax 208 motor, with peak torque limits.
HT04_Endurance.xlsx ---------- This is time-stamped data from the HT04 endurance run.

"Drive_Cycles" FOLDER:  Toggle selection of these files in the init file.
Make_Endurance.m ------------- This is used to modify the Schedule_Accel file to make other files.
Schedule_Accel.mat ----------- This is a drive cycle for the acceleration event.  Creates maximum torque request for all time.
Schedule_Autocross.mat ------- This is a drive cycle for the autocross event.  Initially generated from Christian's lap sim for the Formula Hybrid concept, but likely still useful for HyTech.
Schedule_Autocross_1km.mat --- This is a drive cycle for the autocross event, modified from the original to be repeatable (v(1) == v(end)) and as close to 1 km (1.0055 km) as possible for easy concatenation.
Schedule_Endurance_22km.mat -- This is a drive cycle for the endurance event.  It is the 1km Autocross concatenated 22 times.  Actual distance is 22.12 km.

## More Information
* [Software Guide](https://github.com/hytech-racing/training/tree/master/Resources)
* [Team Site](https://hytechracing.gatech.edu/)
* [Facebook](https://www.facebook.com/HyTechRacing/)
* [Instagram](https://www.instagram.com/hytech.racing/)
* [Engage](https://gatech.campuslabs.com/engage/organization/hytech-racing)

## License
This project is licensed under the GPL License v3.0. See the [LICENSE](LICENSE) file for more information.
