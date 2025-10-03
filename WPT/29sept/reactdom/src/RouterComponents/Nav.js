import React from 'react'
import { Link } from 'react-router';

const Nav = () => {
  return (
    <nav
     style={{
        display:"flex",
        fontSize:"50px",
        height:"80px",
        alignItems:"center" , 
        justifyContent:"center",
        color:"white" ,
        backgroundColor:"black",
        gap:"30px"
     }}>
       <Link to={"/"}>Home</Link>
       <Link to={"/contact"}>Contact</Link>
       <Link to={"/detail"}>Details</Link>
    </nav>
  )
}

export default Nav;