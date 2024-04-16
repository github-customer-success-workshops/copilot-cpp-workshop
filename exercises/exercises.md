# Workshop Exercises

## Exercise 1: Fixing and refactoring the project

Our Calculator project is in need of some love. The tests in `test_main.cpp` are failing and the code is hard to understand . There's some additional work to be done here, but let's start with the following list first and see if Copilot can help us out:

- [ ] Fix the build errors in `test_main.cpp` (If you can't build the project, you can see a copy of the errors in [errors.md](errors.md))
- [ ] Simplify the `Calculator` class by reducing any unnecessary code and rewriting functions as necessary to be more readable while still doing appropriate error handling.

> Goal: Get the tests in `test_main.cpp` to pass and to have a cleaner `Calculator` class.

## Exercise 2: Adding new features

Now that we have a working `Calculator` class, let's add some new features to it! Here are some ideas:

- [ ] New function that calculates the square root of a number.
- [ ] New function to calculate the method of the factorial of a number.
- [ ] New function (you decide) that does something interesting and useful and appropriate for a calculator to do.
- [ ] Add tests for the new functions in `test_main.cpp`. Make sure you have tests that cover all possible edge cases!

> Goal: Add new features to the `Calculator` class and ensure that they are well-tested.

## Exercise 3: Documentation

Documentation is important! It helps others understand how to use the Calculator class and what it does. Let's add some documentation to our project:

- [ ] Add comments to the `Calculator` class and its functions. Make sure to include a brief description of what each function does and what its parameters are. (tip: are there any conventions or comments standards you can follow?)
- [ ] Create a README file that explains the `Calculator` class and how to use it. Include examples of how to use the class and its functions. (tip: is there anything visual you can add to make the documentation better?)

> Goal: Have well-documented code that is easy to understand and use.

## Exercise 4: Improving the project (updating testing framework)

Our project is looking good, but we can make it even better! Let's update the testing framework to use Google Test (GTest) or Catch2 instead of `cassert`:

- [ ] Update the project to use Google Test or Catch2 for testing and ensure that all tests still pass.

> Goal: Have a project that uses a modern testing framework for testing.

## Exercise 5: Converting to another language

Over the last several years, there have been less developers hired at the company that understand C++. Our team has been tasked with converting the project to another language. Let's convert the project to Python:

- [ ] Convert the project to Python. You can use any testing framework you like, but we recommend using `unittest` or `pytest`.
- [ ] Ensure that all tests still pass.

> Goal: A fully converted project that is written in Python with unit tests that pass.
