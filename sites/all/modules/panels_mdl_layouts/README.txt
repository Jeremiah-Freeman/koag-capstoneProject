CONTENTS OF THIS FILE
---------------------
   
 * Introduction
 * Requirements
 * Installation
 * Configuration
 * Maintainer(s)



INTRODUCTION
------------

The Panels Material Design Lite Layouts module provides panels layouts created
with the Material Design Lite's grid layout 
(https://getmdl.io/components/#layout-section/grid)

Each Panel region is a separate grid and inside that grid every panel pane is 
a grid cell. 



REQUIREMENTS
------------

The module will not work obviously without the panels module, however the grid
will not take effect unless the Material Design Lite CSS framework is loaded
through the theme. There aren't many themes based on MDL until the writing of 
this module, I created this for my own custom theme based on MDL.


INSTALLATION
------------

Just enable the module from the modules page or using drush pm-enable


CONFIGURATION
-------------

Create a new panel page and in the layouts options you'll find a new layouts
group 'MDL', the layouts under the group are the ones provided by this module.

MDL allows you to define the number of columns every cell takes (Read the 
full documentation on MDL's site https://getmdl.io), By default the module adds 
the necessary CSS class for MDL to treat the pane as a grid cell but for 
further control of the cell's width you can define every panel pane's width 
through adding the appropriate CSS class through the pane's CSS settings.


MAINTAINER
----------

Abdelrahman Ghareeb <abdelrahman@slashproc.net>
