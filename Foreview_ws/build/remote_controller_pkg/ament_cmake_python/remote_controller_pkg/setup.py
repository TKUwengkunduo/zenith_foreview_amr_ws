from setuptools import find_packages
from setuptools import setup

setup(
    name='remote_controller_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('remote_controller_pkg', 'remote_controller_pkg.*')),
)
