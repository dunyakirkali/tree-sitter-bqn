module.exports = grammar({
  name: 'BQN',

  rules: {
    source_file: $ => 'hello'
  },
  _type: $ => choice(
    'Character',
    'Number',
    'Array',
    'Function',
    '1-Modifier',
    '2-Modifier',
    'Namespace'
  )
});
