tf_base2camera
================================
****
|Author|Zhang Hongda|
|------|-----------------|
|E-mail|2210010444@qq.com|
|Institute|Harbin Institute of Technology|
****

### Description
A tf broadcaster.
### Installation
Step 1: clone the repository into your own workspace
```
cd ${PATH_TO YOUR_WORKSPACE_FOLDER}/src
git clone https://github.com/Zhang-Hongda/tf_base2camera
```
Step 2: building
```
catkin_make
```
Step 3: activate the workspace
```
source ${PATH_TO YOUR_WORKSPACE_FOLDER}/devel/setup.bash
```
### Strat 
To start the program, run:
```
roslaunch tf_base2camera tf_base2camera.launch 
```
### Usage
* Please modify the parameters in [param](./param)/base2camera.yaml according to your own situation.

