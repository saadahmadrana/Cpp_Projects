# Temperature Converter

This C++ program is a command-line application that converts temperatures between Celsius, Fahrenheit, and Kelvin. The user can input a temperature value in one unit and select another unit to convert it to. The program also stores the results of conversions and displays them at the end.

## Features

- Converts between Celsius, Fahrenheit, and Kelvin.
- Allows multiple conversions within a single run.
- Stores and displays all conversion results.

## How to Use

1. **Run the Program**: 
   - Compile and run the `temperature_converter.cpp` file.
   
2. **Menu Options**:
   - You will be presented with a menu to select the unit of the temperature you want to enter.
   - Options:
     - 1. Celsius
     - 2. Fahrenheit
     - 3. Kelvin
     - 0. Exit
   
3. **Enter Temperature**:
   - Input the temperature value you wish to convert.

4. **Select Conversion Unit**:
   - After entering the temperature, choose the unit you want to convert it to (Celsius, Fahrenheit, or Kelvin).

5. **View Results**:
   - The program will display the converted temperature.
   - You can continue converting temperatures or exit the program.

6. **End of Program**:
   - When you exit, the program will display all the conversion results from the session.

## Example

```
Select the unit of the temperature you will enter:
1. Celsius
2. Fahrenheit
3. Kelvin
0. Exit
Enter your choice (0 to exit): 1

Enter the temperature value: 25

Select the unit to convert the temperature to:
1. Celsius
2. Fahrenheit
3. Kelvin
Enter your choice (0 to exit): 2

###############################
Converted temperature: 77
###############################

All conversion results:
77
```

## Limitations

- The program only allows up to 100 conversions per session. If you exceed this limit, no further conversions will be stored.
- The program only handles valid input for the temperature values and unit selections.

## License

This project is open-source and available under the MIT License.
