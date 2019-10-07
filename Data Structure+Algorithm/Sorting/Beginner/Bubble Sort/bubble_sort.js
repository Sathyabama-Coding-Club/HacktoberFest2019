/**
 * JS Bubble sort algorithm implementation
 * @param inputArr [Array]
 * @return Array
 */
const bubbleSort = inputArr => {
    let swapped;

    do {
        swapped = false;
        for (let i = 0; i < inputArr.length; i++) {
            if (inputArr[i] > inputArr[i + 1]) {
                let tmp = inputArr[i];
                inputArr[i] = inputArr[i + 1];
                inputArr[i + 1] = tmp;
                swapped = true;
            }
        }
    } while (swapped);

    return inputArr;
};
