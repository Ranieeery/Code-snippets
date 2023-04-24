document.onkeypress = (e) => {
    if (e.shiftKey && e.code == 'KeyS') alert(document.querySelector('.question__solutions .article-text').textContent);
};
