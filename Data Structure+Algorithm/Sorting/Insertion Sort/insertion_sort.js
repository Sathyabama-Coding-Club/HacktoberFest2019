
/**
 * JS Insertion sort algorithm implementation
 *
 * @param {*} values which is an Array
 * @returns Array
 */
function insertionSort(values) {
  for (var i = 0; i < values.length; i++) {
    let value = values[i];
    for (var j = i - 1; j > -1 && values[j] > value; j--) {
      values[j + 1] = values[j];
    }

    values[j + 1] = value;
  }

  return values;
}
