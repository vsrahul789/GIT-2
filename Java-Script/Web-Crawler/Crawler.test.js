const {normalizeURL} = require('./Crawler.js')
const {test , expect} = require('@jest/globals')

// test('normalizeURL',() => {
//     const input = ''
//     const actual =normalizeURL(input)
//     const expected = ''
//     expect(actual).toEqual(expected)
// })
test('normalizeURL strip protocal',() => {
    const input = 'https://blog.boot.dev/path'
    const actual =normalizeURL(input)
    const expected = 'blog.boot.dev/path'
    expect(actual).toEqual(expected)
})

test('normalizeURL strip trailing slashes',() => {
    const input = 'https://blog.boot.dev/path/'
    const actual =normalizeURL(input)
    const expected = 'blog.boot.dev/path'
    expect(actual).toEqual(expected)
})
test('normalizeURL capitals',() => {
    const input = 'https://BLOG.boot.dev/path/'
    const actual =normalizeURL(input)
    const expected = 'blog.boot.dev/path'
    expect(actual).toEqual(expected)
})
test('normalizeURL strip http',() => {
    const input = 'http://blog.boot.dev/path/'
    const actual =normalizeURL(input)
    const expected = 'blog.boot.dev/path'
    expect(actual).toEqual(expected)
})

