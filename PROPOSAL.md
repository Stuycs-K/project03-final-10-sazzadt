# Final Project Proposal

## Group Members:

Tazrian Sazzad
       
# Intentions:

I will create a terminal based spreadsheet application that includes features like support for real-time collaboration from different computers, the ability to download and import files in formats such as .CSV, managing permissions, autosaving, and support for commands such as CTRL-C (copy) and CTRL-V (paste). The spreadsheet will include features like cell formulas, conditional formatting, common math equations and formatting, error handling, pivot tables, sorting tables, lookup functions, and more depending on time constraints. A stretch goal for this application would be the implementation of creating many kinds of charts (bar graphs, line graphs, pie charts, etc.) based on user-provided data, along with useful features like constructing a best-fit line.

# Intended usage:

The spreadsheet is intended to appear directly on the terminal, with support for scrolling, highlighting cells by clicking and dragging, and the ability to select different categories at the top to perform different features. The main spreadsheet will take up the majority of the terminal, with a small bar at the bottom to switch between different spreadsheets.

# Technical Details:
   
I will use sockets to send spreadsheet data between multiple users working on the spreadsheet at the same time so that local changes on one user's computer are automatically shown on other users' spreadsheets, and I will use semaphores to ensure that two users do not concurrently modify the spreadsheet, but that their changes are processed in order. I will use shared memory so that multiple instances of the spreadsheet application on the same computer will update data between the processes, allowing users to work with multiple tabs seamlessly. The shared memory will also be helpful in keeping the spreadsheet data after the user closes the application. I will be creating multiple files to record information such as the spreadsheet data, who has access to the spreadsheet, the version history, and I will also implement a way for users to import spreadsheet-friendly file types into the application. I will also allow users to download their spreadsheet as a CSV by creating a binary file based on the input data. I will be handling many signals such as CTRL-C, CTRL-V, and CTRL-S to facilitate common commands such as copy, paste, and save. I will have to allocate more memory as the user enters more data, and free the data when the user closes the terminal. I may have to fork and exec certain commands depending on what features I implement in the spreadsheet.
    
# Intended pacing:

1/6 Finish basic terminal user interface, with support for clicking, and data being saved even after the application is closed.
1/8 Implement real-time collaboration on the spreadsheet
1/10 Implement spreadsheet functions and features
11/12 Implement user shortcuts, managing permissions, and version history
11/14 Implement uploading and downloading files, and autosave (MVP finished)
11/18 Add stretch goal features (charts, line of best fit, advanced statistics, etc.)
