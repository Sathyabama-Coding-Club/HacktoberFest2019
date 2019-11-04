// there different ways in Javascript to use linear search:

//ex: find Godzilla
var beasts = ['Centaur', 'Godzilla', 'Mosura', 'Minotaur', 'Hydra', 'Nessie'];

// 1) indexOf:
beasts.indexOf('Godzilla');

//2) findIndex
beasts.findIndex(function (item) {
    return item === 'Godzilla';
});

//3) find
beasts.find(function (item) {
    return item === 'Godzilla';
})

//4) includes
beasts.includes('Godzilla')