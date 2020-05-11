from setuptools import setup, Extension
import os


ext = Extension(
      'prime',
      sources = ['prime.c'])

setup(name='prime',
       version='1.0',
       description='find prime, find nod',
       ext_modules=[ext])
