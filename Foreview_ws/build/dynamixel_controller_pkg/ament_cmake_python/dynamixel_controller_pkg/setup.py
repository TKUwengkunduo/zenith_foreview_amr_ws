from setuptools import find_packages
from setuptools import setup

setup(
    name='dynamixel_controller_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('dynamixel_controller_pkg', 'dynamixel_controller_pkg.*')),
)
