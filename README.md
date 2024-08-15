
# Portable Spectrometer for Non-Invasive Sugar Content Detection in fruits Using Near-Infrared Spectrometry(NIRS)


A brief description of what this project does and who it's for.

This project explores the development of a portable spectrometer designed to evaluate the quality of fruits through non-invasive techniques. Leveraging the AS7265x sensor's multispectral capabilities, the project focuses on assessing key parameters such as sugar content (TSS), size, color, and acidity—essential factors for optimizing harvest timing and ensuring product quality.

Traditionally, measuring sugar content in fruits involves labor-intensive methods like UV absorption and refractometry, which can be both time-consuming and potentially damaging to the fruit. Our approach utilizes near-infrared (NIR) spectrometry, which offers a non-destructive alternative for accurate quality assessment.

The core of the project involves integrating the AS7265x sensor with advanced machine learning algorithms to enhance the accuracy and affordability of the evaluation process. We employ algorithms such as Backpropagation Neural Networks (BPNN), Multiple Linear Regression (MLR), and Partial Least Squares Regression (PLSR) to analyze sensor data and determine the sugar content in fruits.

By developing this portable spectrometer, our goal is to provide an efficient, user-friendly solution for the agricultural industry to improve harvesting practices, ensure better fruit quality, and increase consumer satisfaction.

## Requirements

Before running the notebooks, ensure you have the following installed:

- Python 3.x
- Jupyter Notebook
- Required Python libraries:
  - `numpy`
  - `pandas`
  - `scikit-learn`
  - `matplotlib`
  - `seaborn`

You can install the necessary libraries using `pip`:

```bash
pip install numpy pandas scikit-learn matplotlib seaborn
```

## Instructions
1. Clone the Repository

Clone this repository to your local machine:

```bash
git clone <repository-url>
cd <repository-directory>
```

2. Start Jupyter Notebook

Navigate to the directory containing the Jupyter notebooks and start Jupyter Notebook:

```bash
jupyter notebook
```

3. Explore the Notebooks

Open the following notebooks in Jupyter Notebook and follow the instructions within each notebook:

BPNN_Model.ipynb: Implements and evaluates the Backpropagation Neural Network for predicting sugar content.
PLSR_Model.ipynb: Implements and evaluates Partial Least Squares Regression for predicting sugar content.
MLR_Model.ipynb: Implements and evaluates Multiple Linear Regression for predicting sugar content.
Each notebook includes cells for data loading, preprocessing, model training, and evaluation. Follow the comments and markdown cells for guidance on running each section.

4. Run the Notebooks

Execute the cells in the notebooks sequentially. Make sure to follow any setup or data loading instructions provided at the beginning of each notebook.

Analyze the Results

Review the results and visualizations generated by the notebooks to understand the performance of each machine learning model.

## Data
Ensure you have the required dataset(s) for running the notebooks. The dataset should be in a format compatible with the code provided. Instructions for data format and loading can be found within each notebook.
