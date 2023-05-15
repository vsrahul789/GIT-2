const {JSDOM} = require ('jsdom')



function normalizeURL(urlString){
    if(urlString.length < 1){
        return urlString
    } else{
       const urlObj = new URL(urlString) 
       const hostpath = `${urlObj.hostname}${urlObj.pathname}`

       if(hostpath.length>0 && hostpath.slice(-1) === '/'){
           return hostpath.slice(0,-1)
       }
       return hostpath
    }
}

function getURLfromHTML(htmlBody , baseURL){
    const url = []
    const dom = new JSDOM(htmlBody)
    const linkElements = dom.window.document.querySelectorAll('a')

    for( const linkElement of linkElements){
        if(linkElement.href.slice(0,1) === '/'){
            //relative
            url.push(`${baseURL}${linkElement.href}`)
        }else{
            //absolute
            url.push(linkElement.href)
        }
    }
    return url
}

module.exports = {
    normalizeURL,
    getURLfromHTML
}