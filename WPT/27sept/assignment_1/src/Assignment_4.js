import { useState } from "react";
import UnderGraduate from "./UnderGraduate";

function Display() {
  const [Qualification, setQualification] = useState({})
  function show() {
    let n = document.getElementById("name").value;
    let e = document.getElementById("email").value;
    let q = document.getElementById("select").value;
    if (n === "" && e == "" || q == "") {
      setQualification(null)
    } else {
      setQualification({
        name: n,
        email: e,
        qualification: q
      });
    }

  }
  return (
    <>

      <label>Name:</label>
      <input type="text" id="name" /><br /><br />
      <label>Email Id :</label>
      <input type="text" id="email" /><br /><br />
      <label>Qualification :</label>
      <select id="select">
        <option>select</option>
        <option>UnderGraduate</option>
        <option>Graduate</option>
        <option>Post Graduate</option>
      </select><br />
      <button id="btn1" onClick={show}>Display</button>
      <br /><br /><br />
      {
        !Qualification && <h1>please Enter Correct Info</h1>
      }

      {
        Qualification && Qualification.qualification == "UnderGraduate" && <UnderGraduate obj={Qualification}></UnderGraduate>
      }
      {
        Qualification && Qualification.qualification == "Graduate" && <Graduate obj={Qualification}></Graduate>
      }
      {
        Qualification && Qualification.qualification == "Post Graduate" && <PostGraduate obj={Qualification}></PostGraduate>
      }
    </>
  )

}
export default Display;







function Graduate(props) {
  const [obj, setObj] = useState("")
  function handelClick() {
    let d = document.getElementById("degree").value;
    let py = document.getElementById("py").value;
    let u = document.getElementById("uni").value;
    let m = document.getElementById("marks").value;
    if (d == "" || py == "" || py<300|| py>20000 || u  =="" || m == "" || m < 0 || m > 100) {
      console.log(1)
      setObj(null)
    }
    else {
      setObj({ Degree: d, Passing_year: py, University: u, Marks: m })
    }
  }
  return (
    <>
      <label>Degree:</label>
      <input type="text" id="degree"></input><br />
      <label>Passout Year:</label>
      <input type="number" id="py"></input><br />
      <label>University:</label>
      <input type="text" id="uni"></input><br />
      <label>Marks:</label>
      <input type="number" id="marks"></input><br />

      <button id="btn3" onClick={handelClick}>Submit</button>
      {
        obj && obj != "" &&
        Object.keys(props.obj).map(key => {
          return <h1 key={key}>{key} : {props.obj[key]}</h1>
        })
      }

      {
        obj != "" && !obj && <h1>please enter valid details</h1>
      }
      {
        obj && obj != "" &&
        Object.keys(obj).map(key => {
          return <h1 key={key}>{key} : {obj[key]}</h1>
        })
      }
    </>
  )
}
function PostGraduate(props) {
  const [obj, setObj] = useState("")
  function handelClick() {
    let s = document.getElementById("sub").value;
    let y = document.getElementById("y").value;
    if (s == "" || y == "" || y<=2000 || y>2026 ) {
      setObj(null)
    }
    else {
      setObj({ subject : s , year :y })
    }
  }
  return (
    <>
      <label>Thesis Subject:</label>
      <input type="text" id="sub"></input><br />
      <label>Year:</label>
      <input type="number" id="y"></input><br />
      <button id="btn4" onClick={handelClick}>Submit</button>
      {
        obj && obj != "" &&
        Object.keys(props.obj).map(key => {
          return <h1 key={key}>{key} : {props.obj[key]}</h1>
        })
      }

      {
        obj != "" && !obj && <h1>please enter valid details</h1>
      }
      {
        obj && obj != "" &&
        Object.keys(obj).map(key => {
          return <h1 key={key}>{key} : {obj[key]}</h1>
        })
      }
    </>
  )
}