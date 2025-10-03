export default function Form(){
return(
    <>
   <label>Enter first name</label>
   <input type="text" id="fname" placeholder="Enter first name" maxLength={15} minLength={3} required/> <br></br>
   <label>Enter middle name</label>
   <input type="text" id="mname" placeholder="Enter middle name" maxLength={15} minLength={3}/><br/>
   <label>Enter last name</label>
   <input type="text" id ="lname" placeholder="Enter last name" maxLength={15} minLength={3}/> 
   <label>Contact number</label>
   <input type="number" placeholder="Mobile number" maxLength={10} minLength={10}/> 
   <label>Gender</label>
   <label>Male</label>
   <input type="radio" id="r1" name="gender"></input>
   <label>Female</label>
   <input type="radio" id="r2" name="gender"></input>
    </>
)

}