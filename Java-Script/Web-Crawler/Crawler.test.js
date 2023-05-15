const {normalizeURL,getURLfromHTML} = require('./Crawler.js')
const {test , expect} = require('@jest/globals')

test('normalizeURL',() => {
    const input = ''
    const actual =normalizeURL(input)
    const expected = ''
    expect(actual).toEqual(expected)
})
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

test('getURLfromHTML absolute',() => {
    const inputHTML = `
    <html>
        <body>
            <a href = "https://blog.boot.dev/path/">
                Boot.dev Blog
            </a>
        </body>
    </html>
    `
    const inputBaseURL = "https://blog.boot.dev/path/"
    const actual = getURLfromHTML(inputHTML , inputBaseURL)
    const expected = ["https://blog.boot.dev/path/"]
    expect(actual).toEqual(expected)
})


test('getURLfromHTML Relative',() => {
    const inputHTML = `
    <html>
        <body>
            <a href = "/path/">
                Boot.dev Blog
            </a>
        </body>
    </html>
    `
    const inputBaseURL = "https://blog.boot.dev"
    const actual = getURLfromHTML(inputHTML , inputBaseURL)
    const expected = ["https://blog.boot.dev/path/"]
    expect(actual).toEqual(expected)
})


test('getURLfromHTML both',() => {
    const inputHTML = `
    <html>
        <body>
            <a href = "https://blog.boot.dev/path1/">
                Boot.dev Blog path 1
            </a>
            <a href = "/path2/">
                Boot.dev Blog path 2
            </a>
        </body>
    </html>
    `
    const inputBaseURL = "https://blog.boot.dev"
    const actual = getURLfromHTML(inputHTML , inputBaseURL)
    const expected = ["https://blog.boot.dev/path1/","https://blog.boot.dev/path2/"]
    expect(actual).toEqual(expected)
})