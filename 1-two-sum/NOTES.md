​### Logic

- As given in the problem statement that there exists exactly <b> one unique solution </b>
- Here we will take an element from input and check if element equal to target - input_element exists in the input
- if yes then return the indexes of both of the elements. 
- Algotrithm: <b>TWO_SUM</b>
    - 1. SIZE = INPUT_SIZE<br>
    - 2. I = 0 <br>
    - 3. while I < SIZE <br>
      - 4. if TARGET - NUMS[I] is in NUMS <br>
        - 5. then PUSH the both INDICES to ANS<br>
    - 6. Return ANS
