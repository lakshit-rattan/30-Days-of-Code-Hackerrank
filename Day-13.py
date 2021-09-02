

class Student(Person):
    #   Class Constructor
    #   
    #   Parameters:
    #   firstName - A string denoting the Person's first name.
    #   lastName - A string denoting the Person's last name.
    #   id - An integer denoting the Person's ID number.
    #   scores - An array of integers denoting the Person's test scores.
    #
    # Write your constructor here
    def __init__(self, firstName,lastName,idNumber,scores):
        super().__init__(firstName, lastName, idNumber)
        self.scores = scores
        

    def calculate(self):
        avg = sum(self.scores)/len(self.scores)
        if avg <=100 and avg>=90:
            return "O"
        elif avg <90 and avg>=80:
            return 'E'
        elif avg < 80 and avg>=70:
            return 'A'
        elif avg < 70 and avg>=55:
            return 'P'
        elif avg < 55 and avg>=40:
            return 'D'
        else:
            return 'T'
        
