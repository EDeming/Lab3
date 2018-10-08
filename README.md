Ethan Deming
# Lab3

2. The overflow value is 256
3. The overflow value is 65536
4. The overflow value is 35
5. The overflow value is 171
6. As the n value for these functions grows steadily larger, the accuracy of the result begins to degenerate;
   the result when stored as a double stays accurate for longer, but does eventually begin to degenerate in
   the same way it does when stored as a float. This is due to tiny inaccuracies in the way that the computer
   stores these values, as a binary system is incapable of storing exact ratios. The double stays accurate
   longer because it uses more bits to store values, and can therefore come closer to the actual value in its
   approximation, though as the actual value becomes smaller and smaller, this advantage becomes irrelevant.
7. The code given, when implemented, gives six values, one of which is "i = 4.4." Based on the parameters of
   the code, this should not happen; the code should terminate when i = 4.4, and should not print out that
   value. This error is due once again to the inability of a computer to store a completely accurate decimal.
   Due to the fact that the i is being incremented by an approximation of 0.2, rather than 0.2 itself, and
   because the program is compounding upon these approximations, the result becomes an inaccurate approximation
   of the total value. The computer is not actually reaching the value 4.4, but rather an approximation that
   happens to be less than that value; when the program sees that approximation, it sees the the terminator has
   not been reached, and prints the next value, terminating on the next value given. When the next value is
   printed, it is rounded to the closest value within the parameters, thus creating the output error.
8. Changing the data type stored in the function from question (7) from a float to a double results in the
   program giving the expected output. This can, yet again, be chalked up to rounding errors based on
   approximations of the actual value. Seeing as a double has twice the precision of a float, there is a smaller
   margin of error in the output, and any compounding errors are made less prominent. There is still the
   possibility for inaccurate outputs, but it is less likely given ability to get closer to the accurate value.
