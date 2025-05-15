function addNumbers() {
    const input = document.getElementById("input").value;
    const [a, b] = input.split(" ").map(Number);
    document.getElementById("result").innerText = a + b;
}