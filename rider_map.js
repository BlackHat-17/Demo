function addNewCar() {
    let selectedModel = carSearchInput.value.trim().replace(/\s+/g, "+"); // Convert spaces to "+"
    let carMake = carMakeInput.value.trim().replace(/\s+/g, "+");
    let mileage = carMileageInput.value.trim();

    if (!selectedModel) {
        alert("❌ Please enter a car model.");
        return;
    }

    if (!carMake) {
        alert("❌ Please enter the car make.");
        return;
    }

    if (!mileage || isNaN(mileage) || mileage <= 0) {
        alert("❌ Please enter a valid mileage in km/l.");
        return;
    }

    const newCarKey = `${carMake}+${selectedModel}`; // Combine make + model

    // 🔥 Add new car to Firebase
    set(ref(database, "cars/" + newCarKey), { avg: mileage })
        .then(() => {
            alert("✅ New car added successfully!");
            carList.push(newCarKey.replace(/\+/g, " ")); // Update local dropdown
            newCarFields.style.display = "none"; // Hide new car input fields
            carSearchInput.value = newCarKey.replace(/\+/g, " "); // Set input value
            carDropdown.style.display = "none";
        })
        .catch(error => {
            alert("❌ Error saving car data: " + error.message);
        });
}
