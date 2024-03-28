
<!--- 
Open Source Assistive Technology: GitHub Readme Template
Version 1.1 (2024-Mar-15)
 --->

<!--- 
Introductory text. This section and the following text should be removed.
 --->
This is a GitHub repository intended to act as a template for an open source assistive technology device. It is meant to contain all design files, build files, and documentation for the project. More information about how to use the template is available in the [Documentation_Guide](/Documentation_Guide.docx). You can see examples of other Open AT Devices at the Makers Making Change [website](https://www.makersmakingchange.com/s/category/assistive-devices). 

<!---
INSTRUCTIONS
This is a markdown template for creating the README.md file in a GitHub repository. This file is rendered and displayed automatically when someone visits the repository.

This document includes helper text that will not be displayed when rendered. Any text between the less-than sign + exclamation mark + three hyphen-minus (<!---) and matching three hyphen-minus + greater-than sign will not be displayed. This helper text can be deleted once the corresponding section is completed.

This template has a number of fields that can be searched and replaced with other text:
 - <Device_Name> Replace this with filename-friendly version of the device with underscores. e.g., Open_Wobble_Switch
 - <DeviceName> Replace this with the human-readable name of the device with spaces. e.g., Open Wobble Switch
 - <DesignerName> Replace this with the person or organization responsible for the design. e.g., John Doe.
 - <RepositoryLink> Replace this with the web address for the repository. e.g., (e.g., https://github.com/makersmakingchange/Open-Wobble-Switch))
 - <MMCWebLink> This is an alphanumeric id for the Makers Making Change Website. e.g., 01tJR000000698oYAA. This will come from MMC staff. 
 --->
 
 <!--- 
TITLE
Should match the name of the GitHub repository. Choose something descriptive rather than whimsical. 
 --->
# <DeviceName>



<!--- 
SUMMARY
A brief summary of the project. What it does, who it is for, how much it costs.
 --->
The <DeviceName> is an assistive technology widget that makes it easier to document Open-Source Assistive Technology devices. 

It is intended for use by makers. 

The device is comprised of off-the-shelf electronics and 3D printed parts. 

The overall cost of materials is about $<MaterialCost> (plus $<ShippingCost> for component shipping).

<img src="Photos/<Device_Name>.jpg" width="500" alt="Picture of <DeviceName>.">

## More info at
- [Makers Making Change Assistive Device Library Listing](<MMCWebLink>)

## How to Obtain the Device
### 1. Do-it-Yourself (DIY) or Do-it-Together (DIT)

This is an open-source assistive technology, so anyone is free to build it. All of the files and instructions required to build the device are contained within this repository. Refer to the Maker Guide below.

### 2. Request a build of this device

You may also submit a build request through the [Makers Making Change Assistive Device Library Listing](<MMCWebLink>) to have a volunteer maker build the device. As the requestor, you are responsible for reimbursing the maker for the cost of materials and any shipping.

### 3. Build this device for someone else

If you have the skills and equipment to build this device, and would like to donate your time to create the device for someone who needs it, visit the [MMC Maker Wanted](https://makersmakingchange.com/maker-wanted/) section.


## Build Instructions

### 1. Read through the Maker Guide

The [Maker Guide](/Documentation/<Device_Name>_Maker_Guide.pdf)  contains all the necessary information to build this device, including tool lists, assembly instructions, programming instructions (if applicable) and testing.


### 2. Order the Off-The-Shelf Components

The [Bill of Materials](/Documentation/<Device_Name>_BOM.xlsx) lists all of the parts and components required to build the device.


### 3. Print the 3D Printable components

All of the files and individual print files can be in the [/Build_Files/3D_Printing_Files](/Build_Files/3D_Printing_Files/) folder.

### 4. Assemble the <DeviceName>

Reference the [Assembly Guide](/Documentation/<Device_Name>_Assembly_Guide.pdf) for the tools and steps required to build each portion.

## How to improve this Device
As open source assistive technology, you are welcomed and encouraged to improve upon the design. 

## Files
### Documentation
| Document             | Version | Link |
|----------------------|---------|------|
| Design Rationale     | 1.0     | [<DeviceName>_Design_Rationale](/Documentation/<Device_Name>_Design_Rationale.pdf)     |
| Maker Guide          | 1.0     | [<DeviceName>_Maker_Checklist](/Documentation/<Device_Name>_Maker_Guide.pdf)     |
| Bill of Materials    | 1.0     | [<DeviceName>_Bill_of_Materials](/Documentation/<Device_Name>_BOM.xlsx)     |
| User Guide           | 1.0     | [<DeviceName>_User_Guide](/Documentation/<Device_Name>_Quick_Guide.pdf)    |
| Changelog            | 1.0     | [Changelog](CHANGES.txt)     |

### Design Files
<!---
DESIGN FILES
Include a copy of the original design files to facilitate easy editing and customization. Consider also including a generic format (e.g., STEP)
--->
 - [CAD Files](/Design_Files/CAD_Design_Files)
 - [PCB Files](/Design_Files/PCB_Design_Files)

<!---
BUILD FILES
Include a copy of the build files intended for manufacturing. This may include svg files for laser cutting, stl files for 3d printing, Gerber files for custom PCBs, and Arduino files for custom firmware
--->
### Build Files
 - [3D Printing Files](/Build_Files/3D_Printing_Files)
 - [PCB Build Files](/Build_Files/PCB_Build_Files)
 - [Firmware Files](/Build/Firmware_Files)

<!---
ATTRIBUTION
Provide any necessary attribution for designs or components that are included in the device or as part of the project.
--->
## Attribution

The device was designed by <DesignerName>. 

<!---
This is the attribution for the template.
--->
The documentation template was created by Makers Making Change / Neil Squire Society and is used under a CC BY-SA 4.0 license. It is available at the following link: [https://github.com/makersmakingchange/OpenAT-Template](https://github.com/makersmakingchange/OpenAT-Template)

<!---
CONTRIBUTORS
List the names of the people that contributed to the design. This could include the original source of the idea, designers, testers, documenters, etc.
--->
### Contributors

Designers:
 - Designer 1 
 - Designer 2


<!---
LICENSE
Add the year(s) for the copyright and the Designer Name. You may use the standard set of open licenses or choose your own for the hardware, software, and accompanying materials.
--->
## License
Copyright (c) YYYY <DesignerName>.

This repository describes Open Hardware:
 - Everything needed or used to design, make, test, or prepare the <Device-Name> is licensed under the [CERN 2.0 Weakly Reciprocal license (CERN-OHL-W v2) or later](https://cern.ch/cern-ohl ) .
 - All software is under the [GNU General Public License v3.0 (GPL-3.0)](https://www.gnu.org/licenses/gpl.html).
 - Accompanying material such as instruction manuals, videos, and other copyrightable works that are useful but not necessary to design, make, test, or prepare the <Device-Name> are published under a [Creative Commons Attribution-ShareAlike 4.0 license (CC BY-SA 4.0)](https://creativecommons.org/licenses/by-sa/4.0/) .

You may redistribute and modify this documentation and make products using it under the terms of the [CERN-OHL-W v2](https://cern.ch/cern-ohl).
This documentation is distributed WITHOUT ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING OF MERCHANTABILITY, SATISFACTORY QUALITY AND FITNESS FOR A PARTICULAR PURPOSE.
Please see the CERN-OHL-W v2 for applicable conditions.

Source Location: <Repository_Link> 


---

## About Makers Making Change
[<img src="https://raw.githubusercontent.com/makersmakingchange/makersmakingchange/main/img/mmc_logo.svg" width="500" alt="Makers Making Change Logo">](https://www.makersmakingchange.com/)

Makers Making Change is a program of [Neil Squire](https://www.neilsquire.ca/), a Canadian non-profit that uses technology, knowledge, and passion to empower people with disabilities.

Makers Making Change leverages the capacity of community based Makers, Disability Professionals and Volunteers to develop and deliver affordable Open Source Assistive Technologies.

 - Website: [www.MakersMakingChange.com](https://www.makersmakingchange.com/)
 - GitHub: [makersmakingchange](https://github.com/makersmakingchange)
 - X (formerly Twitter): [@makermakechange](https://twitter.com/makermakechange)
 - Instagram: [@makersmakingchange](https://www.instagram.com/makersmakingchange)
 - Facebook: [makersmakechange](https://www.facebook.com/makersmakechange)
 - LinkedIn: [Neil Squire Society](https://www.linkedin.com/company/neil-squire-society/)
 - Thingiverse: [makersmakingchange](https://www.thingiverse.com/makersmakingchange/about)
 - Printables: [MakersMakingChange](https://www.printables.com/@MakersMakingChange)

### Contact Us
For technical questions, to get involved, or to share your experience we encourage you to [visit our website](https://www.makersmakingchange.com/) or [contact us](https://www.makersmakingchange.com/s/contact).
