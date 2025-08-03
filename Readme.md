# 🧑‍🎓 KTDVS – Class Reunion Data Management Software

**KTDVS** is a desktop application designed to simplify the organization of class reunions by managing participant data with role-based access control and version tracking.

<!-- TOC -->
* [🧑‍🎓 KTDVS – Class Reunion Data Management Software](#-ktdvs--class-reunion-data-management-software)
  * [🎓 Project & Context](#-project--context)
  * [🧩 Key Features](#-key-features)
  * [🎞️ Feature Highlights](#-feature-highlights)
    * [👤 User Roles](#-user-roles)
      * [Main Organizer (Admin)](#main-organizer-admin)
      * [Organizer](#organizer)
    * [🔐 User Management](#-user-management)
    * [✏️ Managing Participants](#-managing-participants)
    * [📖 Participant Version History](#-participant-version-history)
    * [👤 Promoting Participants to Organizers](#-promoting-participants-to-organizers)
  * [🧠 Technical Architecture](#-technical-architecture)
  * [💡 What We Learned](#-what-we-learned)
  * [🧑‍💻 Teamwork Makes the Dream Work](#-teamwork-makes-the-dream-work)
  * [📜 License](#-license)
  * [📦 Running the Project](#-running-the-project)
  * [🖼️ Interactive Prototype](#-interactive-prototype)
<!-- TOC -->

<div align="center">
  <img src="media/img/app/login.png" width="48%"/>
  <img src="media/img/app/user_list.png" width="48%"/>
</div>
<div align="center">
  <img src="media/img/app/user_edit_filled.png" width="48%"/>
  <img src="media/img/app/user_version.png" width="48%"/>
</div>

---

## 🎓 Project & Context

This project was developed during the **Software Engineering** course at **Aalen University** in the **summer semester of 2021**.

The goal was to complete a full software development cycle, including:

- Requirements engineering (IEEE 830)
- System architecture and database design
- GUI development
- Implementation in C++ using Qt
- Persistent data storage with SQLite

To use the app across multiple devices, the SQLite database must be shared.  
This can be achieved by placing the database file on a network drive or a cloud storage service like Dropbox or Google Drive.

---

## 🧩 Key Features

- ✏️ Add, edit, and delete participants
- 📖 View individual change history (versions)
- 📜 Per-user history of all data changes
- 🔐 Role-based user access (admin vs. organizer)
- 💾 Persistent local storage with SQLite
- 👤 Role system: main organizer and co-organizers
- 🧠 Modern Qt-based GUI

Full requirements are available in:  
📄 [IEEE 830 Requirements Specification (PDF)](docs/SoftwareAnforderungenIEEE.pdf)

---


## 🎞️ Feature Highlights

### 👤 User Roles

#### Main Organizer (Admin)
- Created during initial setup
- Has the ability to:
  - Add/remove organizers
  - Set/reset passwords
  - Edit all participant data
  - View full history and version logs
  - Promote participants to organizers

#### Organizer
- Appointed by the main organizer
- Can:
  - Add, edit, or delete participants (limited to those created by themselves)
  - View all participants
  - View change history and versions

> Participants themselves **do not** have access to the system.

---

### 🔐 User Management

The application is secured via **email and password**, using a **SQLite** database.  
Users can be promoted to organizers and then log in. Alternatively, a new system can be created on first launch.

<div align="center">
  <img src="media/img/app/system_view.png"/>
  <img src="media/img/app/login.png"/>
</div>

---

### ✏️ Managing Participants

Participants can be created, viewed, and edited within the application.  
The initial screen displays all registered participants.

<div align="center">
  <img src="media/img/app/user_list.png"/> 
</div>

Clicking the "Teilnehmer hinzufügen" (Add Participant) button opens a form for adding a new participant.  
After entering the required data, click "Speichern" (Save) to create the participant and return to the list view.

<div align="center">
  <img src="media/img/app/user_create.png"/>
</div>

Clicking on a participant opens a view similar to the creation form, allowing the data to be edited.

<div align="center">
  <img src="media/img/app/user_edit_filled.png"/>
</div>

---

### 📖 Participant Version History

To review how a participant’s data has changed over time, open their "Versionsverlauf" (Version History).  
This screen lists all changes made to that participant.

<div align="center">
  <img src="media/img/app/user_version_list.png"/>
</div>

Clicking on an item in the list displays a detailed comparison showing the data before and after the change.

<div align="center">
  <img src="media/img/app/user_version.png"/>
</div>

---

### 👤 Promoting Participants to Organizers

Participants can be promoted to organizers.  
The promoting user generates a **one-time password** for the new organizer.  
The new organizer logs in with this password and is prompted to change it.

If an organizer enters the wrong password 3 times, their account is locked.  
In this case, the main organizer must reset their password through the promotion view.

<div align="center">
  <img src="media/img/app/user_promote.png"/>
  <img src="media/img/app/first_login_organizer.png"/>
</div>

---

## 🧠 Technical Architecture

- **Pattern:** 3-layer architecture
  - UI (Qt Widgets)
  - Application Logic
  - Data Access (DAO Layer)
- **Language:** C++17
- **Framework:** Qt (tested with Qt Creator)
- **Database:** SQLite (single-file)

Class structure overview:

<div align="center">
  <img src="media/img/design/class_diagram.png"/>
</div>

> More diagrams and explanations can be found in the [design documentation (PDF)](docs/Entwurf.pdf)

---

## 💡 What We Learned

- Applying IEEE 830 requirements engineering
- Designing and building a GUI-based application with Qt (C++)
- Implementing role-based access control
- Managing application state and data persistence
- Building versioning systems for user data

---

## 🧑‍💻 Teamwork Makes the Dream Work

Developed by:

- Maximilian Borst
- Jan Kermer
- Simon Ruttmann
- Veronika Scheller
- Michael Ulrich

---

## 📜 License

This project is licensed under the **Apache 2.0 License**.  
Feel free to fork, adapt, or reuse — just give credit. 🤝

---

## 📦 Running the Project

> **Requirements:**
> - Qt Creator (v5 or later)
> - C++17-compatible compiler
> - SQLite support
>
> Clone or download this repository, open the `.pro` file in Qt Creator, then build and run.

---

## 🖼️ Interactive Prototype

An interactive UI prototype is available on [Figma](https://www.figma.com/proto/tc3G3hYe6vGsbr1jqEykhL/KTDVS?node-id=4%3A53)

---
